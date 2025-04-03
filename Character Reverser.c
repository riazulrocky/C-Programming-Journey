#include <stdio.h>
int main()
{
    char first, second, third, temp;

    printf("Order of characters before reversing: ");
    scanf("%c%c%c", &first, &second, &third);

    temp = first;
    first = third;
    second = second;
    third = temp;

    printf("Order of characters after reversing: %c%c%C", first, second, third);

    return 0;
}
