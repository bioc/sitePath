% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/fixationSites.R
\name{fixationSites}
\alias{fixationSites}
\alias{fixationSites.lineagePath}
\alias{fixationSites.sitesMinEntropy}
\alias{fixationSites.paraFixSites}
\title{Fixation sites prediction}
\usage{
fixationSites(paths, ...)

\method{fixationSites}{lineagePath}(
  paths,
  minEffectiveSize = NULL,
  searchDepth = 1,
  method = c("compare", "insert", "delete"),
  ...
)

\method{fixationSites}{sitesMinEntropy}(paths, ...)

\method{fixationSites}{paraFixSites}(paths, ...)
}
\arguments{
\item{paths}{A \code{lineagePath} object returned from
\code{\link{lineagePath}} function.}

\item{...}{further arguments passed to or from other methods.}

\item{minEffectiveSize}{The minimum number of tips in a group.}

\item{searchDepth}{The function uses heuristic search but the termination of
the search cannot be intrinsically decided. \code{searchDepth} is needed to
tell the search when to stop.}

\item{method}{The strategy for predicting the fixation. The basic approach is
entropy minimization and can be achieved by adding or removing fixation
point, or by comparing the two.}
}
\value{
A \code{fixationSites} object.
}
\description{
After finding the \code{\link{lineagePath}} of a phylogenetic
  tree, \code{fixationSites} uses the result to find those sites that show
  fixation on some, if not all, of the lineages. The number of tips before
  and after the fixation mutation is expected to be more than
  \code{minEffectiveSize}. Also, the fixation will be skipped if the amino
  acid/nucleotide is gap or ambiguous character. A lineage has to have at
  least one fixation mutation to be reported.
}
\examples{
data(zikv_tree_reduced)
data(zikv_align_reduced)
tree <- addMSA(zikv_tree_reduced, alignment = zikv_align_reduced)
fixationSites(lineagePath(tree))
}
\seealso{
\code{\link{as.data.frame.fixationSites}}
}
