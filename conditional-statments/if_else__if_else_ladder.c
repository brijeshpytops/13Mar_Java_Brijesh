
#include <stdio.h>

void main() {
   int score;
   printf("Enter your score: ");
   scanf("%d", &score);
   
   if(score >= 0 && score <= 100){
        if(score >= 80){
            printf("first class");
        }else if(score >= 60){
            printf("second class");
        }else if(score >= 40){
            printf("third class");
        }else{
            printf("Sorry! you are failed\nbatter luck next time");
        }
   }
   else{
       printf("Invalid score, Please enter your score between 0 - 100");
   }
   

}