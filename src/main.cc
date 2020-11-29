#include <stdio.h>
#include "factorial.h"

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

    for (long i = 0; i < 21; ++i) {
        printf("%ld! = %ld\n", i, factorial(i));
    }

    //    printf("0x7fffffffffffffff = %ld\n", 0x7fffffffffffffff);
    printf("2^63= %ld\n", 0x7fffffffffffffff);

    return 0;
}
