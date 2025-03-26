#include <stdio.h>
int main() {

    char first_name[10];
    char last_name[10];

    scanf("%s", &first_name);
    scanf("%s", &last_name);

    printf("Hello, %s %s!\n", first_name, last_name);
    printf("Nice to meet you!");

    return 0;
}
