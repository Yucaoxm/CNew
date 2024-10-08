// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// CalculateRealWater
NumericVector CalculateRealWater(NumericVector xev, NumericVector xrf, double xmin, double xmax, double xui, NumericVector xday);
RcppExport SEXP CNew_CalculateRealWater(SEXP xevSEXP, SEXP xrfSEXP, SEXP xminSEXP, SEXP xmaxSEXP, SEXP xuiSEXP, SEXP xdaySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type xev(xevSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xrf(xrfSEXP);
    Rcpp::traits::input_parameter< double >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< double >::type xmax(xmaxSEXP);
    Rcpp::traits::input_parameter< double >::type xui(xuiSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xday(xdaySEXP);
    __result = Rcpp::wrap(CalculateRealWater(xev, xrf, xmin, xmax, xui, xday));
    return __result;
END_RCPP
}
// SpilloverW
NumericVector SpilloverW(double xw0, double xwmax, NumericVector xreal);
RcppExport SEXP CNew_SpilloverW(SEXP xw0SEXP, SEXP xwmaxSEXP, SEXP xrealSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type xw0(xw0SEXP);
    Rcpp::traits::input_parameter< double >::type xwmax(xwmaxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xreal(xrealSEXP);
    __result = Rcpp::wrap(SpilloverW(xw0, xwmax, xreal));
    return __result;
END_RCPP
}
