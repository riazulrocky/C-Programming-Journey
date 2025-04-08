#include <stdio.h>

int main() {
    int number, i;
    long long factorial = 1;

    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= number; i++) {
            factorial *= i;
        }
        printf("The factorial of %d is %lld.\n", number, factorial);
    }

    return 0;
}
