#include <stdio.h>

int main() {
    int num, i;
    double fact = 1.0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number is not defined.\n");
    } else {
        for (i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("Factorial of %d is %.0lf.\n", num, fact);
    }

    return 0;
}
