#ifndef PRIME_H
#define PRIME_H

template<typename T>
bool is_prime(T n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

#endif // PRIME_H
