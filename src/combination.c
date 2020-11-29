#include "factorial.h"

/*
             n!
  nCr = -----------
        (n - r)!*r!

         n*(n-1)*(n-2)* ... *(n - r + 1)
      = --------------------------------
                      r!

  nCr = nC(n-r)
*/

int combination(int n, int r) {
    if (n / 2 < r) return combination(n, n - r);

    int a = 1;
    for (int x = n - r; x < n; ++x) {
        a *= (x + 1);
    }
    return a / factorial(r);
}
