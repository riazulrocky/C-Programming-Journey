#include <stdio.h>

int main() {

    int number, product, count;

    printf("Enter a number : ");
    scanf("%d", &number);

    count = 1;

    while(count <= 10){
        product = number * count;
        printf("%d * %d = %d\n", number, count, product);
        count++;
    }

    return 0;
}
