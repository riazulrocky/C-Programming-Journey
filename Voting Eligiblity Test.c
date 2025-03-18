#include <stdio.h>

int main() {
    int age;

    printf("Enter your age (years) : ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Congratulation! You are eligible for casting your vote.");
    }
    else if (age>=180){
        printf("Age is out of range for voting.");
    }
    else {
        printf("Sorry, you are not eligible to vote.");
    }

    return 0;
}
