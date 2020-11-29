#include <stdio.h>
#include "factorial.h"
#include "combination.h"
#include "prime.h"

static
void print_comb(int n) {
    for (int r = 0; r < n + 1; ++r) {
        printf("%dC%d = %d\n", n, r, combination(n, r));
    }
}

int main(int argc, char **argv) {
    printf("Hello world\n");
    printf("sizeof(int) = %ld\n", sizeof(int));
    printf("sizeof(long) = %ld\n", sizeof(long));
    printf("4! = %d\n", factorial(4));

    for (int i = 0; i < 14; ++i) {
        printf("%d! = %d\n", i, factorial(i));
    }

    //    printf("0x7fffffff = %d\n", 0x7fffffff);
    printf("2^31= %d\n", 0x7fffffff);

    for (int i = 0; i < 21; ++i) {
        printf("%d! = %ld\n", i, lfactorial(i));
    }

    //    printf("0x7fffffffffffffff = %ld\n", 0x7fffffffffffffff);
    printf("2^63= %ld\n", 0x7fffffffffffffff);

    printf("5C3 = %d\n", combination(5, 3));
    printf("5C2 = %d\n", combination(5, 2));

    printf("10C2 = %d\n", combination(10, 2));
    printf("20C2 = %d\n", combination(20, 2));
    printf("100C2 = %d\n", combination(100, 2));


    print_comb(12);


    for (int i = 0; i < 10010; ++i) {
        if (is_prime(i) == TRUE) printf("%d, ", i);
        //        printf("%d is %d\n", i, is_prime(i));
    }
    printf("\n");

    return 0;
}
