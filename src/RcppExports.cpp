// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// pairSimilarity
Rcpp::NumericVector pairSimilarity(const int seqIndex, const Rcpp::ListOf<Rcpp::CharacterVector>& alignedSeqs);
RcppExport SEXP _sitePath_pairSimilarity(SEXP seqIndexSEXP, SEXP alignedSeqsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type seqIndex(seqIndexSEXP);
    Rcpp::traits::input_parameter< const Rcpp::ListOf<Rcpp::CharacterVector>& >::type alignedSeqs(alignedSeqsSEXP);
    rcpp_result_gen = Rcpp::wrap(pairSimilarity(seqIndex, alignedSeqs));
    return rcpp_result_gen;
END_RCPP
}
// getSimilarityMatrix
Rcpp::NumericMatrix getSimilarityMatrix(const Rcpp::ListOf<Rcpp::CharacterVector>& alignedSeqs);
RcppExport SEXP _sitePath_getSimilarityMatrix(SEXP alignedSeqsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ListOf<Rcpp::CharacterVector>& >::type alignedSeqs(alignedSeqsSEXP);
    rcpp_result_gen = Rcpp::wrap(getSimilarityMatrix(alignedSeqs));
    return rcpp_result_gen;
END_RCPP
}
// majorSNPtips
Rcpp::ListOf< Rcpp::ListOf<Rcpp::IntegerVector> > majorSNPtips(const Rcpp::CharacterVector& alignedSeqs, const Rcpp::IntegerVector& siteIndices, const int minSNPnum);
RcppExport SEXP _sitePath_majorSNPtips(SEXP alignedSeqsSEXP, SEXP siteIndicesSEXP, SEXP minSNPnumSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::CharacterVector& >::type alignedSeqs(alignedSeqsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type siteIndices(siteIndicesSEXP);
    Rcpp::traits::input_parameter< const int >::type minSNPnum(minSNPnumSEXP);
    rcpp_result_gen = Rcpp::wrap(majorSNPtips(alignedSeqs, siteIndices, minSNPnum));
    return rcpp_result_gen;
END_RCPP
}
// terminalTipsBySim
Rcpp::ListOf< Rcpp::ListOf<Rcpp::IntegerVector> > terminalTipsBySim(const Rcpp::IntegerVector& siteIndices, const Rcpp::ListOf<Rcpp::IntegerVector>& tipPaths, const Rcpp::ListOf<Rcpp::CharacterVector>& alignedSeqs, const Rcpp::NumericMatrix& metricMatrix);
RcppExport SEXP _sitePath_terminalTipsBySim(SEXP siteIndicesSEXP, SEXP tipPathsSEXP, SEXP alignedSeqsSEXP, SEXP metricMatrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type siteIndices(siteIndicesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::ListOf<Rcpp::IntegerVector>& >::type tipPaths(tipPathsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::ListOf<Rcpp::CharacterVector>& >::type alignedSeqs(alignedSeqsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type metricMatrix(metricMatrixSEXP);
    rcpp_result_gen = Rcpp::wrap(terminalTipsBySim(siteIndices, tipPaths, alignedSeqs, metricMatrix));
    return rcpp_result_gen;
END_RCPP
}
// terminalTipsByDist
Rcpp::ListOf<Rcpp::ListOf<Rcpp::IntegerVector> > terminalTipsByDist(const Rcpp::IntegerVector& siteIndices, const Rcpp::ListOf<Rcpp::IntegerVector>& tipPaths, const Rcpp::ListOf<Rcpp::CharacterVector>& alignedSeqs, const Rcpp::NumericMatrix& metricMatrix);
RcppExport SEXP _sitePath_terminalTipsByDist(SEXP siteIndicesSEXP, SEXP tipPathsSEXP, SEXP alignedSeqsSEXP, SEXP metricMatrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type siteIndices(siteIndicesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::ListOf<Rcpp::IntegerVector>& >::type tipPaths(tipPathsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::ListOf<Rcpp::CharacterVector>& >::type alignedSeqs(alignedSeqsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type metricMatrix(metricMatrixSEXP);
    rcpp_result_gen = Rcpp::wrap(terminalTipsByDist(siteIndices, tipPaths, alignedSeqs, metricMatrix));
    return rcpp_result_gen;
END_RCPP
}
// mergePaths
Rcpp::ListOf<Rcpp::IntegerVector> mergePaths(const Rcpp::ListOf<Rcpp::IntegerVector>& paths);
RcppExport SEXP _sitePath_mergePaths(SEXP pathsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ListOf<Rcpp::IntegerVector>& >::type paths(pathsSEXP);
    rcpp_result_gen = Rcpp::wrap(mergePaths(paths));
    return rcpp_result_gen;
END_RCPP
}
// divergentNode
Rcpp::IntegerVector divergentNode(const Rcpp::ListOf<Rcpp::IntegerVector>& paths);
RcppExport SEXP _sitePath_divergentNode(SEXP pathsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ListOf<Rcpp::IntegerVector>& >::type paths(pathsSEXP);
    rcpp_result_gen = Rcpp::wrap(divergentNode(paths));
    return rcpp_result_gen;
END_RCPP
}
// getReference
Rcpp::IntegerVector getReference(const std::string& refSeq, const char gapChar);
RcppExport SEXP _sitePath_getReference(SEXP refSeqSEXP, SEXP gapCharSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type refSeq(refSeqSEXP);
    Rcpp::traits::input_parameter< const char >::type gapChar(gapCharSEXP);
    rcpp_result_gen = Rcpp::wrap(getReference(refSeq, gapChar));
    return rcpp_result_gen;
END_RCPP
}
// tableAA
Rcpp::IntegerVector tableAA(const Rcpp::CharacterVector& seqs, const int siteIndex);
RcppExport SEXP _sitePath_tableAA(SEXP seqsSEXP, SEXP siteIndexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::CharacterVector& >::type seqs(seqsSEXP);
    Rcpp::traits::input_parameter< const int >::type siteIndex(siteIndexSEXP);
    rcpp_result_gen = Rcpp::wrap(tableAA(seqs, siteIndex));
    return rcpp_result_gen;
END_RCPP
}
// minEntropyByInserting
Rcpp::ListOf<Rcpp::IntegerVector> minEntropyByInserting(const Rcpp::ListOf<Rcpp::IntegerVector>& nodeSummaries, const unsigned int minEffectiveSize, const unsigned int searchDepth);
RcppExport SEXP _sitePath_minEntropyByInserting(SEXP nodeSummariesSEXP, SEXP minEffectiveSizeSEXP, SEXP searchDepthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ListOf<Rcpp::IntegerVector>& >::type nodeSummaries(nodeSummariesSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type minEffectiveSize(minEffectiveSizeSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type searchDepth(searchDepthSEXP);
    rcpp_result_gen = Rcpp::wrap(minEntropyByInserting(nodeSummaries, minEffectiveSize, searchDepth));
    return rcpp_result_gen;
END_RCPP
}
// minEntropyByDeleting
Rcpp::ListOf<Rcpp::IntegerVector> minEntropyByDeleting(const Rcpp::ListOf<Rcpp::IntegerVector>& nodeSummaries, const unsigned int minEffectiveSize, const unsigned int searchDepth);
RcppExport SEXP _sitePath_minEntropyByDeleting(SEXP nodeSummariesSEXP, SEXP minEffectiveSizeSEXP, SEXP searchDepthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ListOf<Rcpp::IntegerVector>& >::type nodeSummaries(nodeSummariesSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type minEffectiveSize(minEffectiveSizeSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type searchDepth(searchDepthSEXP);
    rcpp_result_gen = Rcpp::wrap(minEntropyByDeleting(nodeSummaries, minEffectiveSize, searchDepth));
    return rcpp_result_gen;
END_RCPP
}
// minEntropyByComparing
Rcpp::ListOf<Rcpp::IntegerVector> minEntropyByComparing(const Rcpp::ListOf<Rcpp::IntegerVector>& nodeSummaries, const unsigned int minEffectiveSize, const unsigned int searchDepth);
RcppExport SEXP _sitePath_minEntropyByComparing(SEXP nodeSummariesSEXP, SEXP minEffectiveSizeSEXP, SEXP searchDepthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ListOf<Rcpp::IntegerVector>& >::type nodeSummaries(nodeSummariesSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type minEffectiveSize(minEffectiveSizeSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type searchDepth(searchDepthSEXP);
    rcpp_result_gen = Rcpp::wrap(minEntropyByComparing(nodeSummaries, minEffectiveSize, searchDepth));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_sitePath_pairSimilarity", (DL_FUNC) &_sitePath_pairSimilarity, 2},
    {"_sitePath_getSimilarityMatrix", (DL_FUNC) &_sitePath_getSimilarityMatrix, 1},
    {"_sitePath_majorSNPtips", (DL_FUNC) &_sitePath_majorSNPtips, 3},
    {"_sitePath_terminalTipsBySim", (DL_FUNC) &_sitePath_terminalTipsBySim, 4},
    {"_sitePath_terminalTipsByDist", (DL_FUNC) &_sitePath_terminalTipsByDist, 4},
    {"_sitePath_mergePaths", (DL_FUNC) &_sitePath_mergePaths, 1},
    {"_sitePath_divergentNode", (DL_FUNC) &_sitePath_divergentNode, 1},
    {"_sitePath_getReference", (DL_FUNC) &_sitePath_getReference, 2},
    {"_sitePath_tableAA", (DL_FUNC) &_sitePath_tableAA, 2},
    {"_sitePath_minEntropyByInserting", (DL_FUNC) &_sitePath_minEntropyByInserting, 3},
    {"_sitePath_minEntropyByDeleting", (DL_FUNC) &_sitePath_minEntropyByDeleting, 3},
    {"_sitePath_minEntropyByComparing", (DL_FUNC) &_sitePath_minEntropyByComparing, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_sitePath(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
