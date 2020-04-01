// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

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
// runTreemer
Rcpp::ListOf<Rcpp::IntegerVector> runTreemer(const Rcpp::ListOf<Rcpp::IntegerVector>& tipPaths, const Rcpp::ListOf<Rcpp::CharacterVector>& alignedSeqs, Rcpp::NumericMatrix& simMatrixInput, const float similarity, const bool getTips);
RcppExport SEXP _sitePath_runTreemer(SEXP tipPathsSEXP, SEXP alignedSeqsSEXP, SEXP simMatrixInputSEXP, SEXP similaritySEXP, SEXP getTipsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ListOf<Rcpp::IntegerVector>& >::type tipPaths(tipPathsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::ListOf<Rcpp::CharacterVector>& >::type alignedSeqs(alignedSeqsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type simMatrixInput(simMatrixInputSEXP);
    Rcpp::traits::input_parameter< const float >::type similarity(similaritySEXP);
    Rcpp::traits::input_parameter< const bool >::type getTips(getTipsSEXP);
    rcpp_result_gen = Rcpp::wrap(runTreemer(tipPaths, alignedSeqs, simMatrixInput, similarity, getTips));
    return rcpp_result_gen;
END_RCPP
}
// majorSNPtips
Rcpp::ListOf<Rcpp::IntegerVector> majorSNPtips(const Rcpp::CharacterVector& alignedSeqs, const int minSNPnum);
RcppExport SEXP _sitePath_majorSNPtips(SEXP alignedSeqsSEXP, SEXP minSNPnumSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::CharacterVector& >::type alignedSeqs(alignedSeqsSEXP);
    Rcpp::traits::input_parameter< const int >::type minSNPnum(minSNPnumSEXP);
    rcpp_result_gen = Rcpp::wrap(majorSNPtips(alignedSeqs, minSNPnum));
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
// summarizeAA
Rcpp::ListOf< Rcpp::ListOf<Rcpp::IntegerVector> > summarizeAA(const Rcpp::List& allMutations, const Rcpp::ListOf<Rcpp::CharacterVector>& allSampledTips, const Rcpp::ListOf<Rcpp::CharacterVector>& originalNodeTips, const Rcpp::Function& setTxtProgressBar, const Rcpp::List& pb);
RcppExport SEXP _sitePath_summarizeAA(SEXP allMutationsSEXP, SEXP allSampledTipsSEXP, SEXP originalNodeTipsSEXP, SEXP setTxtProgressBarSEXP, SEXP pbSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type allMutations(allMutationsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::ListOf<Rcpp::CharacterVector>& >::type allSampledTips(allSampledTipsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::ListOf<Rcpp::CharacterVector>& >::type originalNodeTips(originalNodeTipsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Function& >::type setTxtProgressBar(setTxtProgressBarSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type pb(pbSEXP);
    rcpp_result_gen = Rcpp::wrap(summarizeAA(allMutations, allSampledTips, originalNodeTips, setTxtProgressBar, pb));
    return rcpp_result_gen;
END_RCPP
}
// tip2colorEdge
Rcpp::CharacterVector tip2colorEdge(Rcpp::CharacterVector& colorEdge, const std::string& color, const Rcpp::IntegerMatrix& treeEdge, const Rcpp::IntegerVector& tips, const int rootNode);
RcppExport SEXP _sitePath_tip2colorEdge(SEXP colorEdgeSEXP, SEXP colorSEXP, SEXP treeEdgeSEXP, SEXP tipsSEXP, SEXP rootNodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector& >::type colorEdge(colorEdgeSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type color(colorSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerMatrix& >::type treeEdge(treeEdgeSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type tips(tipsSEXP);
    Rcpp::traits::input_parameter< const int >::type rootNode(rootNodeSEXP);
    rcpp_result_gen = Rcpp::wrap(tip2colorEdge(colorEdge, color, treeEdge, tips, rootNode));
    return rcpp_result_gen;
END_RCPP
}
// tip2Edge
Rcpp::IntegerVector tip2Edge(const Rcpp::IntegerMatrix& treeEdge, const Rcpp::IntegerVector& tips, const int rootNode);
RcppExport SEXP _sitePath_tip2Edge(SEXP treeEdgeSEXP, SEXP tipsSEXP, SEXP rootNodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::IntegerMatrix& >::type treeEdge(treeEdgeSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type tips(tipsSEXP);
    Rcpp::traits::input_parameter< const int >::type rootNode(rootNodeSEXP);
    rcpp_result_gen = Rcpp::wrap(tip2Edge(treeEdge, tips, rootNode));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_sitePath_getSimilarityMatrix", (DL_FUNC) &_sitePath_getSimilarityMatrix, 1},
    {"_sitePath_runTreemer", (DL_FUNC) &_sitePath_runTreemer, 5},
    {"_sitePath_majorSNPtips", (DL_FUNC) &_sitePath_majorSNPtips, 2},
    {"_sitePath_mergePaths", (DL_FUNC) &_sitePath_mergePaths, 1},
    {"_sitePath_divergentNode", (DL_FUNC) &_sitePath_divergentNode, 1},
    {"_sitePath_getReference", (DL_FUNC) &_sitePath_getReference, 2},
    {"_sitePath_tableAA", (DL_FUNC) &_sitePath_tableAA, 2},
    {"_sitePath_minEntropyByInserting", (DL_FUNC) &_sitePath_minEntropyByInserting, 3},
    {"_sitePath_minEntropyByDeleting", (DL_FUNC) &_sitePath_minEntropyByDeleting, 3},
    {"_sitePath_minEntropyByComparing", (DL_FUNC) &_sitePath_minEntropyByComparing, 3},
    {"_sitePath_summarizeAA", (DL_FUNC) &_sitePath_summarizeAA, 5},
    {"_sitePath_tip2colorEdge", (DL_FUNC) &_sitePath_tip2colorEdge, 5},
    {"_sitePath_tip2Edge", (DL_FUNC) &_sitePath_tip2Edge, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_sitePath(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
