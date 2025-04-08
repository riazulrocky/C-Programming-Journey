#include <stdio.h>

int main() {
    int choice;
    float value, convertedValue;

    printf("Unit Converter\n");
    printf("1. Meters to Kilometers\n");
    printf("2. Grams to Kilograms\n");
    printf("3. Celsius to Fahrenheit\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter value in meters: ");
            scanf("%f", &value);
            convertedValue = value / 1000;
            printf("%.2f meters = %.2f kilometers\n", value, convertedValue);
            break;
        case 2:
            printf("Enter value in grams: ");
            scanf("%f", &value);
            convertedValue = value / 1000;
            printf("%.2f grams = %.2f kilograms\n", value, convertedValue);
            break;
        case 3:
            printf("Enter value in Celsius: ");
            scanf("%f", &value);
            convertedValue = (value * 9/5) + 32;
            printf("%.2f Celsius = %.2f Fahrenheit\n", value, convertedValue);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
