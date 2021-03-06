// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// corC
double corC(NumericVector x, NumericVector y);
RcppExport SEXP Reot_corC(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector y = Rcpp::as<NumericVector >(ySEXP);
    double __result = corC(x, y);
    return Rcpp::wrap(__result);
END_RCPP
}
// lmC
List lmC(NumericVector x, NumericVector y);
RcppExport SEXP Reot_lmC(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector y = Rcpp::as<NumericVector >(ySEXP);
    List __result = lmC(x, y);
    return Rcpp::wrap(__result);
END_RCPP
}
// predRsquaredSum
NumericVector predRsquaredSum(NumericMatrix pred_vals, NumericMatrix resp_vals, bool standardised);
RcppExport SEXP Reot_predRsquaredSum(SEXP pred_valsSEXP, SEXP resp_valsSEXP, SEXP standardisedSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericMatrix pred_vals = Rcpp::as<NumericMatrix >(pred_valsSEXP);
    NumericMatrix resp_vals = Rcpp::as<NumericMatrix >(resp_valsSEXP);
    bool standardised = Rcpp::as<bool >(standardisedSEXP);
    NumericVector __result = predRsquaredSum(pred_vals, resp_vals, standardised);
    return Rcpp::wrap(__result);
END_RCPP
}
// respLmParam
List respLmParam(NumericMatrix x, NumericMatrix y, int cell);
RcppExport SEXP Reot_respLmParam(SEXP xSEXP, SEXP ySEXP, SEXP cellSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericMatrix x = Rcpp::as<NumericMatrix >(xSEXP);
    NumericMatrix y = Rcpp::as<NumericMatrix >(ySEXP);
    int cell = Rcpp::as<int >(cellSEXP);
    List __result = respLmParam(x, y, cell);
    return Rcpp::wrap(__result);
END_RCPP
}
