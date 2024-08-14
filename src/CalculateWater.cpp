#include <Rcpp.h>

using namespace Rcpp;

// [[Rcpp::export]]
NumericVector CalculateRealWater(NumericVector xev, NumericVector xrf, double xmin, double xmax, double xui, NumericVector xday) {                           int n = xev.size();
                           int nd = xday.size();
                           
                           NumericVector xreal(n);
                           xreal[0] = xmin;
                           for(int i = 1; i < n; i++)
                           {
                           if(xreal[i-1]+xrf[i]-xev[i]>xmax) {
                           xreal[i] = xmax- xev[i];
                           } else if(xreal[i-1]+xrf[i]-xev[i]<xmin) {
                           xreal[i]=xreal[i-1]+xrf[i];
                           } else {
                           xreal[i]=xreal[i-1]+xrf[i]-xev[i];
                           }
                           
                           for(int j = 0; j < nd; j++)
                           {
                           if(i == (xday[j]-1))
                           {
                           xreal[i] = xreal[i]*xui;
                           }
                           }
                           }
                           
                           return xreal;
}
