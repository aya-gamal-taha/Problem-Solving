#include <stdio.h>

int main() {
    int A, B;
    char op;

    scanf("%d%c%d", &A, &op, &B);

    if (op == '+') {
        printf("%d\n", A + B);
    } else if (op == '-') {
        printf("%d\n", A - B);
    } else if (op == '*') {
        printf("%d\n", A * B);
    } else if (op == '/') {
        printf("%d\n", A / B);  // قسمة عددية صحيحة (بدون كسور)
    }

    return 0;
}
