#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter first value : ");
    scanf("%d", &num1);
    printf("Enter second value : ");
    scanf("%d", &num2);
    printf("Enter third value : ");
    scanf("%d", &num3);

    if(num1>=num2 && num1>=num3){
        printf("%d is maximum", num1);
    }
    else if(num2>=num1 && num2>=num3){
        printf("%d is maximum", num2);
    }
    else{
        printf("%d is maximum", num3);
    }

    return 0;
}
