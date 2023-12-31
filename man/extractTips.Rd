% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/extractTips.R
\name{extractTips}
\alias{extractTips}
\alias{extractTips.lineagePath}
\alias{extractTips.sitesMinEntropy}
\alias{extractTips.fixationSites}
\alias{extractTips.sitePath}
\alias{extractTips.parallelSites}
\alias{extractTips.sitePara}
\title{Extract grouped tips for a single site}
\usage{
extractTips(x, ...)

\method{extractTips}{lineagePath}(x, site, ...)

\method{extractTips}{sitesMinEntropy}(x, site, ...)

\method{extractTips}{fixationSites}(x, site, select = 1, ...)

\method{extractTips}{sitePath}(x, select = 1, ...)

\method{extractTips}{parallelSites}(x, site, ...)

\method{extractTips}{sitePara}(x, ...)
}
\arguments{
\item{x}{A \code{fixationSites} or a \code{sitePath} object.}

\item{...}{Other arguments}

\item{site}{A site predicted to experience fixation.}

\item{select}{For a site, there theoretically might be more than one fixation
on different lineages. You may use this argument to extract for a specific
fixation of a site. The default is the first fixation of the site.}
}
\value{
Tree tips grouped as \code{\link{list}}
}
\description{
The result of \code{\link{fixationSites}} and \code{sitePath}
  contains all the possible sites with fixation mutation. The function
  \code{extractTips} retrieves the name of the tips involved in the fixation.

For \code{\link{lineagePath}}, the function \code{extractTips}
  groups all the tree tips according to the amino acid/nucleotide of the
  \code{site}.

For \code{\link{parallelSites}} and \code{sitePara} object, the
  function \code{extractTips} retrieve all the tips with parallel mutation.
}
\examples{
data(zikv_tree_reduced)
data(zikv_align_reduced)
tree <- addMSA(zikv_tree_reduced, alignment = zikv_align_reduced)
mutations <- fixationSites(lineagePath(tree))
extractTips(mutations, 139)
}
