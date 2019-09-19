// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// IpfpCoreC
Rcpp::List IpfpCoreC(const Rcpp::NumericVector& seed, const Rcpp::List& target_list, const Rcpp::List& target_data, const bool& print, const int& iter, const double& tol, const bool& na_target, const int& n_threads);
RcppExport SEXP _mipfp_IpfpCoreC(SEXP seedSEXP, SEXP target_listSEXP, SEXP target_dataSEXP, SEXP printSEXP, SEXP iterSEXP, SEXP tolSEXP, SEXP na_targetSEXP, SEXP n_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type target_list(target_listSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type target_data(target_dataSEXP);
    Rcpp::traits::input_parameter< const bool& >::type print(printSEXP);
    Rcpp::traits::input_parameter< const int& >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< const double& >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const bool& >::type na_target(na_targetSEXP);
    Rcpp::traits::input_parameter< const int& >::type n_threads(n_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(IpfpCoreC(seed, target_list, target_data, print, iter, tol, na_target, n_threads));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_mipfp_IpfpCoreC", (DL_FUNC) &_mipfp_IpfpCoreC, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_mipfp(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}