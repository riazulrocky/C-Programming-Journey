#include <stdio.h>

int main() {
   int maths, physics, chemistry, total, maths_physics_total;

   printf("Input the marks obtained in Physics : ");
   scanf("%d", &physics);

   printf("Input the marks obtained in Chemistry : ");
   scanf("%d", &chemistry);

   printf("Input the marks obtained in Mathematics : ");
   scanf("%d", &maths);

   printf("Total marks of Maths, Physics and Chemistry : ");
   scanf("%d", &total);

   printf("Total marks of Maths and Physics : ");
   scanf("%d", &maths_physics_total);

   if (maths >= 65 && physics >= 55 && chemistry >= 50 && total >= 190) {
      printf("The candidate is eligible for admission.\n");
   } else if (maths_physics_total >= 140 && total < 190) {
      printf("The candidate is eligible for admission.\n");
   } else {
      printf("The candidate is not eligible for admission.\n");
   }

   return 0;
}
