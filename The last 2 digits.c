#include <stdio.h>

int main() {
    long long A, B, C, D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

    long long result = A * B % 100;
    result = result * C % 100;
    result = result * D % 100;

    printf("%02lld\n", result);

    return 0;
}
