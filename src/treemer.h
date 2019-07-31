/*
 * Achieve a tip-to-root trimming behavior for a phylogenetic tree. The basic
 * idea is to start at the terminal node for each tree tip and move the node
 * towards the root node. Only when more than two nodes meet each other along
 * the way do the nodes make a real move otherwise the node stays.
 *
 * The tree is represented by tipPaths (from the R function "nodepath" in
 * "ape" package). The algorithm is performed on the tipPaths along with the
 * corresponding aligned sequences for each tip.
 */

#ifndef SITEPATH_TREEMER_H
#define SITEPATH_TREEMER_H

#include <utility>
#include "util.h"

namespace Treemer {

typedef std::vector<TipSeqLinker *> tips;
typedef std::map<int, tips> clusters;

class Base {
    /*
     * The Base class provides the structure for performing the trimming
     * algorithm. Depending on the extra constrain for cluster of tips,
     * the class can be derived to achieve a variety of behaviors.
     *
     * The extra constrain could be the largest similarity difference within
     * a cluster, the amino acid of the site and the average similarity.
     */
public:
    Base(
        const Rcpp::ListOf<Rcpp::IntegerVector> &tipPaths,
        const Rcpp::ListOf<Rcpp::CharacterVector> &alignedSeqs
    );
    virtual ~Base();
    // Cluster of tree tips after trimming
    std::map< int, std::vector<int> > getTips() const;
    // Paths from root to trimming-node for all tips
    // Tips in the same cluster will have the same path
    std::vector<Rcpp::IntegerVector> getPaths() const;
protected:
    // The actual trimming process happens here
    void pruneTree();
    // Whether the cluster of tips satisfy the extra constrain to be valid
    virtual bool qualified(const clusters::iterator &clusters_it) const = 0;
protected:
    // The container to hold all the tips
    tips m_tips;
    // The clustering of tips during trimming process
    clusters m_clusters;
private:
    // The root node and length of aligned sequences
    const int m_root, m_seqLen;
};

class BySite: public Base {
    /*
     * Trim the tree by amino acid of a site. This is going to exhaust the
     * trimming to reach the root node for each tip and produce segments
     * of tips grouped by amino acid and ordered as of nodePath
     */
public:
    BySite(
        const Rcpp::ListOf<Rcpp::IntegerVector> &tipPaths,
        const Rcpp::ListOf<Rcpp::CharacterVector> &alignedSeqs,
        const int site
    );
private:
    bool qualified(const clusters::iterator &clusters_it) const;
private:
    const int m_site;
};

class BySimilarity: public Base {
    /*
     * Trim the tree and stop the process when the largest similarity
     * difference in each tip cluster is about to exceed the constrain
     */
public:
    BySimilarity(
        const Rcpp::ListOf<Rcpp::IntegerVector> &tipPaths,
        const Rcpp::ListOf<Rcpp::CharacterVector> &alignedSeqs,
        const float simThreshold,
        std::map<std::pair<int, int>, float> &simMatrix
    );
protected:
    // The constrain of the largest similarity difference
    const float m_simCut;
    // Keep a record of pair-wise similiarity to avoid repeating computation
    std::map<std::pair<int, int>, float> *m_compared;
private:
    bool qualified(const clusters::iterator &clusters_it) const;
};

class ByAverageSimilarity: public BySimilarity {
    /*
     * Trim the tree and stop the process when the average similarity
     * in each tip cluster is about to be lower than the threshold
     */
public:
    ByAverageSimilarity(
        const Rcpp::ListOf<Rcpp::IntegerVector> &tipPaths,
        const Rcpp::ListOf<Rcpp::CharacterVector> &alignedSeqs,
        const float simThreshold,
        std::map<std::pair<int, int>, float> &simMatrix
    );
private:
    bool qualified(const clusters::iterator &clusters_it) const;
};

}

#endif /* SITEPATH_TREEMER_H */
