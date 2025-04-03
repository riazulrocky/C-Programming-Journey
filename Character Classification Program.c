#include <stdio.h>
#include <ctype.h>

int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (isalpha(c)) {
        printf("This is an alphabet.");
    } else if (isdigit(c)) {
        printf("This is a digit.");
    } else {
        printf("This is a special character.");
    }

    return 0;
}
