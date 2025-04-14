#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Input a temperature (in Centigrade): ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.6f degrees Fahrenheit\n", fahrenheit);

    return 0;
}
