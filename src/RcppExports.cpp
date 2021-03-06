// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// new_flock
SEXP new_flock();
RcppExport SEXP _geese_new_flock() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    rcpp_result_gen = Rcpp::wrap(new_flock());
    return rcpp_result_gen;
END_RCPP
}
// add_geese
int add_geese(SEXP p, std::vector< std::vector< unsigned int > >& annotations, std::vector< unsigned int >& geneid, std::vector< int >& parent, std::vector< bool >& duplication);
RcppExport SEXP _geese_add_geese(SEXP pSEXP, SEXP annotationsSEXP, SEXP geneidSEXP, SEXP parentSEXP, SEXP duplicationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    Rcpp::traits::input_parameter< std::vector< std::vector< unsigned int > >& >::type annotations(annotationsSEXP);
    Rcpp::traits::input_parameter< std::vector< unsigned int >& >::type geneid(geneidSEXP);
    Rcpp::traits::input_parameter< std::vector< int >& >::type parent(parentSEXP);
    Rcpp::traits::input_parameter< std::vector< bool >& >::type duplication(duplicationSEXP);
    rcpp_result_gen = Rcpp::wrap(add_geese(p, annotations, geneid, parent, duplication));
    return rcpp_result_gen;
END_RCPP
}
// init_model
int init_model(SEXP p, bool verb);
RcppExport SEXP _geese_init_model(SEXP pSEXP, SEXP verbSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    Rcpp::traits::input_parameter< bool >::type verb(verbSEXP);
    rcpp_result_gen = Rcpp::wrap(init_model(p, verb));
    return rcpp_result_gen;
END_RCPP
}
// nterms
int nterms(SEXP p);
RcppExport SEXP _geese_nterms(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(nterms(p));
    return rcpp_result_gen;
END_RCPP
}
// nnodes
IntegerVector nnodes(SEXP p);
RcppExport SEXP _geese_nnodes(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(nnodes(p));
    return rcpp_result_gen;
END_RCPP
}
// ntrees
int ntrees(SEXP p);
RcppExport SEXP _geese_ntrees(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(ntrees(p));
    return rcpp_result_gen;
END_RCPP
}
// nleafs
IntegerVector nleafs(SEXP p);
RcppExport SEXP _geese_nleafs(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(nleafs(p));
    return rcpp_result_gen;
END_RCPP
}
// likelihood
double likelihood(SEXP p, const std::vector< double >& par, bool as_log, bool trunc_seq);
RcppExport SEXP _geese_likelihood(SEXP pSEXP, SEXP parSEXP, SEXP as_logSEXP, SEXP trunc_seqSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    Rcpp::traits::input_parameter< const std::vector< double >& >::type par(parSEXP);
    Rcpp::traits::input_parameter< bool >::type as_log(as_logSEXP);
    Rcpp::traits::input_parameter< bool >::type trunc_seq(trunc_seqSEXP);
    rcpp_result_gen = Rcpp::wrap(likelihood(p, par, as_log, trunc_seq));
    return rcpp_result_gen;
END_RCPP
}
// get_probabilities
NumericMatrix get_probabilities(SEXP p);
RcppExport SEXP _geese_get_probabilities(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(get_probabilities(p));
    return rcpp_result_gen;
END_RCPP
}
// get_sequence
std::vector< unsigned int > get_sequence(SEXP p, bool reduced_sequence);
RcppExport SEXP _geese_get_sequence(SEXP pSEXP, SEXP reduced_sequenceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    Rcpp::traits::input_parameter< bool >::type reduced_sequence(reduced_sequenceSEXP);
    rcpp_result_gen = Rcpp::wrap(get_sequence(p, reduced_sequence));
    return rcpp_result_gen;
END_RCPP
}
// set_seed
int set_seed(SEXP p, unsigned int s);
RcppExport SEXP _geese_set_seed(SEXP pSEXP, SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(set_seed(p, s));
    return rcpp_result_gen;
END_RCPP
}
// sim_geese
std::vector< std::vector< unsigned int > > sim_geese(SEXP p, const std::vector<double>& par, int seed);
RcppExport SEXP _geese_sim_geese(SEXP pSEXP, SEXP parSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type par(parSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_geese(p, par, seed));
    return rcpp_result_gen;
END_RCPP
}
// observed_counts
std::vector< std::vector< double > > observed_counts(SEXP p);
RcppExport SEXP _geese_observed_counts(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(observed_counts(p));
    return rcpp_result_gen;
END_RCPP
}
// print_observed_counts
int print_observed_counts(SEXP p);
RcppExport SEXP _geese_print_observed_counts(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(print_observed_counts(p));
    return rcpp_result_gen;
END_RCPP
}
// support_size
int support_size(SEXP p);
RcppExport SEXP _geese_support_size(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(support_size(p));
    return rcpp_result_gen;
END_RCPP
}
// parse_polytomies
int parse_polytomies(SEXP p);
RcppExport SEXP _geese_parse_polytomies(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(parse_polytomies(p));
    return rcpp_result_gen;
END_RCPP
}
// nfuns
int nfuns(SEXP p);
RcppExport SEXP _geese_nfuns(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(nfuns(p));
    return rcpp_result_gen;
END_RCPP
}
// names_geese
std::vector< std::string > names_geese(SEXP p);
RcppExport SEXP _geese_names_geese(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(names_geese(p));
    return rcpp_result_gen;
END_RCPP
}
// transition_prob
double transition_prob(SEXP p, const std::vector< double >& params, bool duplication, const std::vector< bool >& state, const IntegerMatrix array, bool as_log);
RcppExport SEXP _geese_transition_prob(SEXP pSEXP, SEXP paramsSEXP, SEXP duplicationSEXP, SEXP stateSEXP, SEXP arraySEXP, SEXP as_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    Rcpp::traits::input_parameter< const std::vector< double >& >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< bool >::type duplication(duplicationSEXP);
    Rcpp::traits::input_parameter< const std::vector< bool >& >::type state(stateSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix >::type array(arraySEXP);
    Rcpp::traits::input_parameter< bool >::type as_log(as_logSEXP);
    rcpp_result_gen = Rcpp::wrap(transition_prob(p, params, duplication, state, array, as_log));
    return rcpp_result_gen;
END_RCPP
}
// conditional_prob
double conditional_prob(SEXP p, const std::vector< double >& params, bool duplication, const std::vector< bool >& state, const IntegerMatrix array, uint i, uint j, bool as_log);
RcppExport SEXP _geese_conditional_prob(SEXP pSEXP, SEXP paramsSEXP, SEXP duplicationSEXP, SEXP stateSEXP, SEXP arraySEXP, SEXP iSEXP, SEXP jSEXP, SEXP as_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    Rcpp::traits::input_parameter< const std::vector< double >& >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< bool >::type duplication(duplicationSEXP);
    Rcpp::traits::input_parameter< const std::vector< bool >& >::type state(stateSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix >::type array(arraySEXP);
    Rcpp::traits::input_parameter< uint >::type i(iSEXP);
    Rcpp::traits::input_parameter< uint >::type j(jSEXP);
    Rcpp::traits::input_parameter< bool >::type as_log(as_logSEXP);
    rcpp_result_gen = Rcpp::wrap(conditional_prob(p, params, duplication, state, array, i, j, as_log));
    return rcpp_result_gen;
END_RCPP
}
// print_geese
int print_geese(SEXP p);
RcppExport SEXP _geese_print_geese(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(print_geese(p));
    return rcpp_result_gen;
END_RCPP
}
// rule_limit_changes
int rule_limit_changes(SEXP p, int term_pos, int lb, int ub, bool duplication);
RcppExport SEXP _geese_rule_limit_changes(SEXP pSEXP, SEXP term_posSEXP, SEXP lbSEXP, SEXP ubSEXP, SEXP duplicationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type term_pos(term_posSEXP);
    Rcpp::traits::input_parameter< int >::type lb(lbSEXP);
    Rcpp::traits::input_parameter< int >::type ub(ubSEXP);
    Rcpp::traits::input_parameter< bool >::type duplication(duplicationSEXP);
    rcpp_result_gen = Rcpp::wrap(rule_limit_changes(p, term_pos, lb, ub, duplication));
    return rcpp_result_gen;
END_RCPP
}
// predict_geese
std::vector< std::vector< double > > predict_geese(SEXP p, const std::vector< double >& par, bool leave_one_out, bool use_reduced_sequence, bool only_annotated);
RcppExport SEXP _geese_predict_geese(SEXP pSEXP, SEXP parSEXP, SEXP leave_one_outSEXP, SEXP use_reduced_sequenceSEXP, SEXP only_annotatedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    Rcpp::traits::input_parameter< const std::vector< double >& >::type par(parSEXP);
    Rcpp::traits::input_parameter< bool >::type leave_one_out(leave_one_outSEXP);
    Rcpp::traits::input_parameter< bool >::type use_reduced_sequence(use_reduced_sequenceSEXP);
    Rcpp::traits::input_parameter< bool >::type only_annotated(only_annotatedSEXP);
    rcpp_result_gen = Rcpp::wrap(predict_geese(p, par, leave_one_out, use_reduced_sequence, only_annotated));
    return rcpp_result_gen;
END_RCPP
}
// predict_flock
std::vector< std::vector< std::vector< double > > > predict_flock(SEXP p, const std::vector< double >& par, bool leave_one_out, bool use_reduced_sequence, bool only_annotated);
RcppExport SEXP _geese_predict_flock(SEXP pSEXP, SEXP parSEXP, SEXP leave_one_outSEXP, SEXP use_reduced_sequenceSEXP, SEXP only_annotatedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    Rcpp::traits::input_parameter< const std::vector< double >& >::type par(parSEXP);
    Rcpp::traits::input_parameter< bool >::type leave_one_out(leave_one_outSEXP);
    Rcpp::traits::input_parameter< bool >::type use_reduced_sequence(use_reduced_sequenceSEXP);
    Rcpp::traits::input_parameter< bool >::type only_annotated(only_annotatedSEXP);
    rcpp_result_gen = Rcpp::wrap(predict_flock(p, par, leave_one_out, use_reduced_sequence, only_annotated));
    return rcpp_result_gen;
END_RCPP
}
// term_gains
int term_gains(SEXP p, std::vector<unsigned int>& funs, bool duplication);
RcppExport SEXP _geese_term_gains(SEXP pSEXP, SEXP funsSEXP, SEXP duplicationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    Rcpp::traits::input_parameter< std::vector<unsigned int>& >::type funs(funsSEXP);
    Rcpp::traits::input_parameter< bool >::type duplication(duplicationSEXP);
    rcpp_result_gen = Rcpp::wrap(term_gains(p, funs, duplication));
    return rcpp_result_gen;
END_RCPP
}
// term_loss
int term_loss(SEXP p, std::vector<unsigned int>& funs, bool duplication);
RcppExport SEXP _geese_term_loss(SEXP pSEXP, SEXP funsSEXP, SEXP duplicationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    Rcpp::traits::input_parameter< std::vector<unsigned int>& >::type funs(funsSEXP);
    Rcpp::traits::input_parameter< bool >::type duplication(duplicationSEXP);
    rcpp_result_gen = Rcpp::wrap(term_loss(p, funs, duplication));
    return rcpp_result_gen;
END_RCPP
}
// term_cogain
int term_cogain(SEXP p, unsigned int a, unsigned int b, bool duplication);
RcppExport SEXP _geese_term_cogain(SEXP pSEXP, SEXP aSEXP, SEXP bSEXP, SEXP duplicationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type a(aSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type b(bSEXP);
    Rcpp::traits::input_parameter< bool >::type duplication(duplicationSEXP);
    rcpp_result_gen = Rcpp::wrap(term_cogain(p, a, b, duplication));
    return rcpp_result_gen;
END_RCPP
}
// term_neofun
int term_neofun(SEXP p, unsigned int a, unsigned int b, bool duplication);
RcppExport SEXP _geese_term_neofun(SEXP pSEXP, SEXP aSEXP, SEXP bSEXP, SEXP duplicationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type a(aSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type b(bSEXP);
    Rcpp::traits::input_parameter< bool >::type duplication(duplicationSEXP);
    rcpp_result_gen = Rcpp::wrap(term_neofun(p, a, b, duplication));
    return rcpp_result_gen;
END_RCPP
}
// term_subfun
int term_subfun(SEXP p, unsigned int a, unsigned int b, bool duplication);
RcppExport SEXP _geese_term_subfun(SEXP pSEXP, SEXP aSEXP, SEXP bSEXP, SEXP duplicationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type a(aSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type b(bSEXP);
    Rcpp::traits::input_parameter< bool >::type duplication(duplicationSEXP);
    rcpp_result_gen = Rcpp::wrap(term_subfun(p, a, b, duplication));
    return rcpp_result_gen;
END_RCPP
}
// term_maxfuns
int term_maxfuns(SEXP p, unsigned int lb, unsigned int ub, bool duplication);
RcppExport SEXP _geese_term_maxfuns(SEXP pSEXP, SEXP lbSEXP, SEXP ubSEXP, SEXP duplicationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type lb(lbSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type ub(ubSEXP);
    Rcpp::traits::input_parameter< bool >::type duplication(duplicationSEXP);
    rcpp_result_gen = Rcpp::wrap(term_maxfuns(p, lb, ub, duplication));
    return rcpp_result_gen;
END_RCPP
}
// term_overall_changes
int term_overall_changes(SEXP p, bool duplication);
RcppExport SEXP _geese_term_overall_changes(SEXP pSEXP, SEXP duplicationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    Rcpp::traits::input_parameter< bool >::type duplication(duplicationSEXP);
    rcpp_result_gen = Rcpp::wrap(term_overall_changes(p, duplication));
    return rcpp_result_gen;
END_RCPP
}
// term_kgains
int term_kgains(SEXP p, std::vector<unsigned int>& funs, int k, bool duplication);
RcppExport SEXP _geese_term_kgains(SEXP pSEXP, SEXP funsSEXP, SEXP kSEXP, SEXP duplicationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    Rcpp::traits::input_parameter< std::vector<unsigned int>& >::type funs(funsSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< bool >::type duplication(duplicationSEXP);
    rcpp_result_gen = Rcpp::wrap(term_kgains(p, funs, k, duplication));
    return rcpp_result_gen;
END_RCPP
}
// term_neofun_a2b
int term_neofun_a2b(SEXP p, int a, int b, bool duplication);
RcppExport SEXP _geese_term_neofun_a2b(SEXP pSEXP, SEXP aSEXP, SEXP bSEXP, SEXP duplicationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type b(bSEXP);
    Rcpp::traits::input_parameter< bool >::type duplication(duplicationSEXP);
    rcpp_result_gen = Rcpp::wrap(term_neofun_a2b(p, a, b, duplication));
    return rcpp_result_gen;
END_RCPP
}
// term_genes_changing
int term_genes_changing(SEXP p, bool duplication);
RcppExport SEXP _geese_term_genes_changing(SEXP pSEXP, SEXP duplicationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    Rcpp::traits::input_parameter< bool >::type duplication(duplicationSEXP);
    rcpp_result_gen = Rcpp::wrap(term_genes_changing(p, duplication));
    return rcpp_result_gen;
END_RCPP
}
// term_prop_genes_changing
int term_prop_genes_changing(SEXP p, bool duplication);
RcppExport SEXP _geese_term_prop_genes_changing(SEXP pSEXP, SEXP duplicationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    Rcpp::traits::input_parameter< bool >::type duplication(duplicationSEXP);
    rcpp_result_gen = Rcpp::wrap(term_prop_genes_changing(p, duplication));
    return rcpp_result_gen;
END_RCPP
}
// term_coopt
int term_coopt(SEXP p, unsigned int a, unsigned int b, bool duplication);
RcppExport SEXP _geese_term_coopt(SEXP pSEXP, SEXP aSEXP, SEXP bSEXP, SEXP duplicationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type p(pSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type a(aSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type b(bSEXP);
    Rcpp::traits::input_parameter< bool >::type duplication(duplicationSEXP);
    rcpp_result_gen = Rcpp::wrap(term_coopt(p, a, b, duplication));
    return rcpp_result_gen;
END_RCPP
}
// new_geese
SEXP new_geese(std::vector< std::vector< unsigned int > >& annotations, std::vector< unsigned int >& geneid, std::vector< int >& parent, std::vector< bool >& duplication);
RcppExport SEXP _geese_new_geese(SEXP annotationsSEXP, SEXP geneidSEXP, SEXP parentSEXP, SEXP duplicationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::vector< std::vector< unsigned int > >& >::type annotations(annotationsSEXP);
    Rcpp::traits::input_parameter< std::vector< unsigned int >& >::type geneid(geneidSEXP);
    Rcpp::traits::input_parameter< std::vector< int >& >::type parent(parentSEXP);
    Rcpp::traits::input_parameter< std::vector< bool >& >::type duplication(duplicationSEXP);
    rcpp_result_gen = Rcpp::wrap(new_geese(annotations, geneid, parent, duplication));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_geese_new_flock", (DL_FUNC) &_geese_new_flock, 0},
    {"_geese_add_geese", (DL_FUNC) &_geese_add_geese, 5},
    {"_geese_init_model", (DL_FUNC) &_geese_init_model, 2},
    {"_geese_nterms", (DL_FUNC) &_geese_nterms, 1},
    {"_geese_nnodes", (DL_FUNC) &_geese_nnodes, 1},
    {"_geese_ntrees", (DL_FUNC) &_geese_ntrees, 1},
    {"_geese_nleafs", (DL_FUNC) &_geese_nleafs, 1},
    {"_geese_likelihood", (DL_FUNC) &_geese_likelihood, 4},
    {"_geese_get_probabilities", (DL_FUNC) &_geese_get_probabilities, 1},
    {"_geese_get_sequence", (DL_FUNC) &_geese_get_sequence, 2},
    {"_geese_set_seed", (DL_FUNC) &_geese_set_seed, 2},
    {"_geese_sim_geese", (DL_FUNC) &_geese_sim_geese, 3},
    {"_geese_observed_counts", (DL_FUNC) &_geese_observed_counts, 1},
    {"_geese_print_observed_counts", (DL_FUNC) &_geese_print_observed_counts, 1},
    {"_geese_support_size", (DL_FUNC) &_geese_support_size, 1},
    {"_geese_parse_polytomies", (DL_FUNC) &_geese_parse_polytomies, 1},
    {"_geese_nfuns", (DL_FUNC) &_geese_nfuns, 1},
    {"_geese_names_geese", (DL_FUNC) &_geese_names_geese, 1},
    {"_geese_transition_prob", (DL_FUNC) &_geese_transition_prob, 6},
    {"_geese_conditional_prob", (DL_FUNC) &_geese_conditional_prob, 8},
    {"_geese_print_geese", (DL_FUNC) &_geese_print_geese, 1},
    {"_geese_rule_limit_changes", (DL_FUNC) &_geese_rule_limit_changes, 5},
    {"_geese_predict_geese", (DL_FUNC) &_geese_predict_geese, 5},
    {"_geese_predict_flock", (DL_FUNC) &_geese_predict_flock, 5},
    {"_geese_term_gains", (DL_FUNC) &_geese_term_gains, 3},
    {"_geese_term_loss", (DL_FUNC) &_geese_term_loss, 3},
    {"_geese_term_cogain", (DL_FUNC) &_geese_term_cogain, 4},
    {"_geese_term_neofun", (DL_FUNC) &_geese_term_neofun, 4},
    {"_geese_term_subfun", (DL_FUNC) &_geese_term_subfun, 4},
    {"_geese_term_maxfuns", (DL_FUNC) &_geese_term_maxfuns, 4},
    {"_geese_term_overall_changes", (DL_FUNC) &_geese_term_overall_changes, 2},
    {"_geese_term_kgains", (DL_FUNC) &_geese_term_kgains, 4},
    {"_geese_term_neofun_a2b", (DL_FUNC) &_geese_term_neofun_a2b, 4},
    {"_geese_term_genes_changing", (DL_FUNC) &_geese_term_genes_changing, 2},
    {"_geese_term_prop_genes_changing", (DL_FUNC) &_geese_term_prop_genes_changing, 2},
    {"_geese_term_coopt", (DL_FUNC) &_geese_term_coopt, 4},
    {"_geese_new_geese", (DL_FUNC) &_geese_new_geese, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_geese(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
