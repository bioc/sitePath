#' @rdname allSitesName
#' @title Retrieve position of all the sites
#' @description The function is a way to get position of the resulting sites
#'   from \code{\link{SNPsites}}, \code{\link{fixationSites}} and
#'   \code{\link{parallelSites}}. The numbering is consistent with what's being
#'   set by \code{\link{setSiteNumbering}}
#' @param x The object containing the sites from analysis
#' @param ... Other arguments
#' @return An integer vector for sites position
#' @export
#' @examples
#' data(zikv_tree)
#' msaPath <- system.file('extdata', 'ZIKV.fasta', package = 'sitePath')
#' tree <- addMSA(zikv_tree, msaPath = msaPath, msaFormat = 'fasta')
#' snp <- SNPsites(tree)
#' allSitesName(snp)
allSitesName <- function(x, ...) {
    UseMethod("allSitesName")
}

#' @rdname allSitesName
#' @export
allSitesName.SNPsites <- function(x, ...) {
    as.character(as.integer(x))
}

#' @rdname allSitesName
#' @export
allSitesName.sitesMinEntropy <- function(x, ...) {
    names(x[[1]])
}

#' @rdname allSitesName
#' @export
allSitesName.fixationSites <- function(x, ...) {
    names(x)
}

#' @rdname allSitesName
#' @export
allSitesName.parallelSites <- function(x, ...) {
    names(x)
}

#' @rdname allSitesName
#' @param type Return fixation or parallel sites
#' @export
allSitesName.paraFixSites <- function(x,
                                      type = c("paraFix", "fixation", "parallel"),
                                      ...) {
    res <- switch(
        match.arg(type),
        "paraFix" = as.character(as.integer(x)),
        "fixation" = allSitesName(attr(x, "allFixSites")),
        "parallel" = allSitesName(attr(x, "allParaSites"))
    )
    return(res)
}
