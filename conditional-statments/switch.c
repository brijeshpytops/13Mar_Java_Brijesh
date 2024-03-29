Example-1:

#include <stdio.h>

void main() {
   int num;
   printf("Enter your num: ");
   scanf("%d", &num);
   
   switch(num){
        case 0:
            printf("This is a value zero");
            break;
        case 1:
            printf("This is a value one");
            break;
        default:
            printf("This is a another value");
        
   }

}


Example-2:

// if statement
#include <stdio.h>

void main() {
   int day;
   printf("Enter your day: ");
   scanf("%d", &day);
   
   switch(day){
        case 1:
            printf("today is sunday");
            break;
        case 2:
            printf("today is monday");
            break;
        case 3:
            printf("today is tuesday");
            break;
        case 4:
            printf("today is wednesday");
            break;
        case 5:
            printf("today is thrusday");
            break;
        case 6:
            printf("today is friday");
            break;
        case 7:
            printf("today is saturday");
            break;
       
        default:
            printf("Invalid day");
        
   }

}