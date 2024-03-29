
#include <stdio.h>

int main() {
   int age;
   float weight;
   printf("Enter your age: ");
   scanf("%d", &age);
   printf("Enter your weight: ");
   scanf("%f", &weight);
   
   if(age >= 18 && weight >= 50){
       printf("You can donate");
   }else{
       printf("You can not donate");
   }
    return 0;
}