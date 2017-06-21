// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// chol_update
NumericMatrix chol_update(NumericMatrix LL, NumericVector xx);
RcppExport SEXP mixtureModels_chol_update(SEXP LLSEXP, SEXP xxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type LL(LLSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xx(xxSEXP);
    rcpp_result_gen = Rcpp::wrap(chol_update(LL, xx));
    return rcpp_result_gen;
END_RCPP
}
// chol_downdate
NumericMatrix chol_downdate(NumericMatrix LL, NumericVector xx);
RcppExport SEXP mixtureModels_chol_downdate(SEXP LLSEXP, SEXP xxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type LL(LLSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xx(xxSEXP);
    rcpp_result_gen = Rcpp::wrap(chol_downdate(LL, xx));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_RcppComponent();
RcppExport SEXP _rcpp_module_boot_RcppMixture();

static const R_CallMethodDef CallEntries[] = {
    {"mixtureModels_chol_update", (DL_FUNC) &mixtureModels_chol_update, 2},
    {"mixtureModels_chol_downdate", (DL_FUNC) &mixtureModels_chol_downdate, 2},
    {"_rcpp_module_boot_RcppComponent", (DL_FUNC) &_rcpp_module_boot_RcppComponent, 0},
    {"_rcpp_module_boot_RcppMixture", (DL_FUNC) &_rcpp_module_boot_RcppMixture, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_mixtureModels(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
