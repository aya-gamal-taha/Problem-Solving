#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C, D;
    scanf("%lf %lf %lf %lf", &A, &B, &C, &D);

    double power1 = B * log(A);
    double power2 = D * log(C);

    if (power1 > power2)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
