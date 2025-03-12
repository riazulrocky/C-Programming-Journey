#include <stdio.h>

int main() {
   float a, b, perimeter;

   printf("Enter the length of side a: ");
   scanf("%f", &a);

   printf("Enter the length of side b: ");
   scanf("%f", &b);

   perimeter = 2 * (a + b);

   printf("The perimeter of the rectangle is: %f", perimeter);

   return 0;
}
