// -*- mode: c++; coding: utf-8 -*-
#ifndef COMBINATION_H
#define COMBINATION_H

/*
             n!
  nCr = -----------
        (n - r)!*r!

         n*(n-1)*(n-2)* ... *(n - r + 1)
      = --------------------------------
                      r!

  nCr = nC(n-r)
*/

template<typename T>
T combination(T n, T r) {
    if (n / 2 < r) return combination(n, n - r);

    int a = 1;
    for (int x = n - r; x < n; ++x) {
        a *= (x + 1);
    }
    return a / factorial(r);
}

#endif // COMBINATION_H
