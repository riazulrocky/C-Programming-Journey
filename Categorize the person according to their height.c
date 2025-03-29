#include <stdio.h>

int main() {
    int height;

    printf("Enter the height of the person in centimeters: ");
    scanf("%d", &height);

    if (height < 150) {
        printf("The person is Dwarf.\n");
    } else if (height >= 150 && height <= 165) {
        printf("The person is Average height.\n");
    } else if (height >= 166 && height <= 185) {
        printf("The person is Tall.\n");
    } else {
        printf("The person is Abnormally tall.\n");
    }

    return 0;
}
