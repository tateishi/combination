// -*- mode: c++; coding: utf-8 -*-
#ifndef FACTORIAL_H
#define FACTORIAL_H

/*
13!  =  1932053504
14!  = 87178291200
2^31 =  2147483647

      13!     <      2^31     <     14!
1,932,053,504 < 2,147,483,647 < 87,178,291,200

なのでint(32bit)を返すfactorial()は正しい結果はn=13まで

20!  =  2432902008176640000
21!  = 51090942171709440000
2^63 =  9223372036854775807

          20!             <           2^63            <           21!
2,432,902,008,176,640,000 < 9,223,372,036,854,775,807 < 51,090,942,171,709,440,000

なのでlong(64bit)を返すlfactorial()は正しい結果はn=20まで
*/

/* extern int factorial(int n); */
/* extern long lfactorial(int n); */

template<typename T>
T factorial(T n) {
    if (n < 0) return -1;
    T result = 1;
    for (T i = 0; i < n; ++i) {
        result *= (i + 1);
    }
    return result;
}

#endif // FACTORIAL_H
