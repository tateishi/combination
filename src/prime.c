#include "prime.h"

int is_prime(int n) {
    if (n < 2) return FALSE;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return FALSE;
    }
    return TRUE;
}
