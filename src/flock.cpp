// #include <random>
// #include <iostream>
// #include <string>
// #include <algorithm>
#include "barry/barry.hpp"
#include "barry/models/geese.hpp"
#include <Rcpp.h>
using namespace Rcpp;

#include "geese-utils.hpp"

//' @title Flock of GEESE
//' @description Flocks are pooled models which include multiple phylums.
//' @name flock-class
//' @export
//' @aliases flock
// [[Rcpp::export(rng = false)]]
SEXP new_flock() {

  Rcpp::XPtr< Flock > dat(new Flock());

  dat.attr("class") = "flock";

  return dat;

}

//' @rdname flock-class
//' @param p An object of class `flock`.
//' @param annotations Vector of integer vectors with annotations.
//' @param geneid integer vector with gene ids
//' @param parent integer vector with parent gene id
//' @export
// [[Rcpp::export(rng = false, invisible = true)]]
int add_geese(
    SEXP p,
    std::vector< std::vector< unsigned int > > & annotations,
    std::vector< unsigned int > & geneid,
    std::vector< int > & parent,
    std::vector< bool > & duplication
) {

  CHECK_FLOCK(p)

  Rcpp::XPtr< Flock >ptr(p);
  ptr->add_data(annotations, geneid, parent, duplication);

  return 0;

}

