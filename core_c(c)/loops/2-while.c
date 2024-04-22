# Example-1: 

#include <stdio.h>

void main() {

   
   while(1){
        int age;
        float weight;
        printf("Enter your age: ");
        scanf("%d", &age);
        
        if(age >= 18){
                printf("Enter your weight: ");
                scanf("%f", &weight);
                if(weight >= 50){
                    printf("You can donate\n\n");
                }else{
                    printf("You can not donate\n\n");
                }
        }else{
            printf("You can not donate\n\n");
    }
   }
   
   
}

# Example-2: 

#include <stdio.h>

void main() {
    int start = 1, end = 10, table = 50;
    while(start <= end){
        printf("%d * %d = %d\n",table, start, (table * start));
        start+=1;
    }
   
   
}