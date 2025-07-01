#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int years = N / 365;
    int remaining_days = N % 365;
    int months = remaining_days / 30;
    int days = remaining_days % 30;

    printf("%d years\n", years);
    printf("%d months\n", months);
    printf("%d days\n", days);

    return 0;
}
