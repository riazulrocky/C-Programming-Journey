#include <stdio.h>

int main() {
    double balance, bonus;
    char gender;

    printf("Enter your account balance on 31st December: ");
    scanf("%lf", &balance);
    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender);

    bonus = 0.02 * balance;
    if (gender == 'F' && balance > 50000) {
        bonus += 0.03 * balance;
    }

    printf("Your bonus is Tk. %.2f\n", bonus);

    return 0;
}
