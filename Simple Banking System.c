#include <stdio.h>

int main() {
    float balance = 0.0;
    int choice;
    float amount;

    while (1) {
        printf("\nSimple Banking System\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: %.2f\n", balance);
                break;
            case 2:
                printf("Enter the amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Successfully deposited %.2f. Your new balance is: %.2f\n", amount, balance);
                } else {
                    printf("Invalid deposit amount!\n");
                }
                break;
            case 3:
                printf("Enter the amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Successfully withdrew %.2f. Your new balance is: %.2f\n", amount, balance);
                } else if (amount > balance) {
                    printf("Insufficient balance!\n");
                } else {
                    printf("Invalid withdrawal amount!\n");
                }
                break;
            case 4:
                printf("Thank you for using the banking system. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please select a valid option.\n");
        }
    }

    return 0;
}
