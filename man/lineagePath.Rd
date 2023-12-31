% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/lineagePath.R
\name{lineagePath}
\alias{lineagePath}
\alias{lineagePath.phylo}
\alias{lineagePath.treedata}
\alias{lineagePath.phyMSAmatched}
\alias{sneakPeek}
\alias{lineagePath.sneakPeekedPaths}
\alias{lineagePath.paraFixSites}
\title{Resolving lineage paths using SNP}
\usage{
lineagePath(tree, similarity, ...)

\method{lineagePath}{phylo}(
  tree,
  similarity = NULL,
  alignment = NULL,
  seqType = c("AA", "DNA", "RNA"),
  reference = NULL,
  gapChar = "-",
  minSkipSize = NULL,
  ...
)

\method{lineagePath}{treedata}(tree, ...)

\method{lineagePath}{phyMSAmatched}(
  tree,
  similarity = NULL,
  simMatrix = NULL,
  forbidTrivial = TRUE,
  ...
)

sneakPeek(tree, step = 9, maxPath = NULL, minPath = 0, makePlot = TRUE)

\method{lineagePath}{sneakPeekedPaths}(tree, similarity, ...)

\method{lineagePath}{paraFixSites}(tree, similarity = NULL, ...)
}
\arguments{
\item{tree}{The return from \code{\link{addMSA}} or \code{sneakPeek}
function.}

\item{similarity}{The parameter for identifying phylogenetic pathway using SNP. If
provided as fraction between 0 and 1, then the minimum number of SNP will
be total tips times \code{Nmin}. If provided as integer greater than 1, the
minimum number will be \code{Nmin}.}

\item{...}{Other arguments.}

\item{alignment}{An \code{alignment} object. This commonly can be from
sequence parsing function in the \code{\link{seqinr}} package. Sequence
names in the alignment should include all \code{tip.label} in the tree}

\item{seqType}{The type of the sequence in the alignment file. The default is
"AA" for amino acid. The other options are "DNA" and "RNA".}

\item{reference}{Name of reference for site numbering. The name has to be one
of the sequences' name. The default uses the intrinsic alignment numbering}

\item{gapChar}{The character to indicate gap. The numbering will skip the
\code{gapChar} for the reference sequence.}

\item{minSkipSize}{The minimum number of tips to have gap or ambiguous amino
acid/nucleotide for a site to be ignored in other analysis. This will not
affect the numbering. The default is 0.8.}

\item{simMatrix}{Deprecated and will not have effect.}

\item{forbidTrivial}{Does not allow trivial trimming.}

\item{step}{the 'similarity' window for calculating and plotting. To better
see the impact of threshold on path number. The default is 10.}

\item{maxPath}{maximum number of path to return show in the plot. The number
of path in the raw tree can be far greater than trimmed tree. To better see
the impact of threshold on path number. This is preferably specified. The
default is one 20th of tree tip number.}

\item{minPath}{minimum number of path to return show in the plot. To better
see the impact of threshold on path number. The default is 1.}

\item{makePlot}{Whether make a plot when return.}
}
\value{
Lineage path represent by node number.

\code{sneakPeek} return the similarity threhold against number of
  lineagePath. There will be a simple dot plot between threshold and path
  number if \code{makePlot} is TRUE.
}
\description{
\code{lineagePath} finds the lineages of a phylogenetic tree
  providing the corresponding sequence alignment. This is done by finding
  'major SNPs' which usually accumulate along the evolutionary pathways.

\code{sneakPeek} is intended to plot 'similarity' (actually the
  least percentage of 'major SNP') as a threshold against number of output
  lineagePath. This plot is intended to give user a rough view about how many
  lineages they could expect from the 'similarity' threshold in the function
  \code{\link{lineagePath}}. The number of lineagePath is preferably not be
  too many or too few. The result excludes where the number of lineagePath is
  greater than number of tips divided by 20 or user-defined maxPath. The zero
  lineagePath result will also be excluded.

When used on the return of \code{sneakPeek}, a
  \code{lineagePath} with the closest \code{similarity} will be retrieved
  from the returned value.

\code{similarity} has no effect when using on
  \code{\link{paraFixSites}} object
}
\examples{
data('zikv_tree')
data('zikv_align')
tree <- addMSA(zikv_tree, alignment = zikv_align)
lineagePath(tree)
sneakPeek(tree, step = 3)
x <- sneakPeek(tree, step = 3)
lineagePath(x, similarity = 0.05)
}
