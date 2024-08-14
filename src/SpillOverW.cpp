#include <Rcpp.h>

using namespace Rcpp;

// [[Rcpp::export]]
NumericVector SpilloverW(double xw0, double xwmax, NumericVector xreal) {
                          int n = xreal.size();
                          NumericVector wcal(n);
                          for(int i = 0; i < n; i++)
                          {
                             wcal[i] = xw0*(1.2*pow(xreal[i]/xwmax,20))/(1+1.2*pow(xreal[i]/xwmax,20));
                          }
                          return wcal;
}
