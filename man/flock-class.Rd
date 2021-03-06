% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{flock-class}
\alias{flock-class}
\alias{new_flock}
\alias{flock}
\alias{add_geese}
\title{Flock of GEESE}
\usage{
new_flock()

add_geese(p, annotations, geneid, parent, duplication)
}
\arguments{
\item{p}{An object of class \code{flock}.}

\item{annotations}{Vector of integer vectors with annotations.}

\item{geneid}{integer vector with gene ids.}

\item{parent}{integer vector with parent gene id.}

\item{duplication}{logical vector indicating the type of event.}
}
\description{
Flocks are pooled models which include multiple phylums.
}
