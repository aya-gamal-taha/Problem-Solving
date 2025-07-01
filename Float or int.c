#include <stdio.h>
#include <math.h>

int main() {
    double N;
    scanf("%lf", &N);

    int intPart = (int)N;
    double fracPart = N - intPart;

    if (fracPart == 0)
        printf("int %d\n", intPart);
    else
        printf("float %d %.3lf\n", intPart, fracPart);

    return 0;
}
