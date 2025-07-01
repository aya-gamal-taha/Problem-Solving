#include <stdio.h>
#include <math.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    double result = (double)A / B;

    printf("floor %d / %d = %.0f\n", A, B, floor(result));
    printf("ceil %d / %d = %.0f\n", A, B, ceil(result));
    printf("round %d / %d = %.0f\n", A, B, round(result));

    return 0;
}
