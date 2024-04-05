#include <stdio.h>

int main() {
    int students_ms[2][5];
    for(int row = 1; row<=2; row++){
        printf("STU%d\n",row);
        for(int col = 1; col<=5; col++){
            printf("Provide me marks of sub%d: ",col);
            scanf("%d", &students_ms[row-1][col-1]);
        }
    }
    
    for(int row = 1; row<=2; row++){
        int total = 0;
        for(int col = 1; col<=5; col++){
            total += students_ms[row-1][col-1];
            printf("%d\t", students_ms[row-1][col-1]);
        }
        int result = total/5;
        if(result >= 35){
            printf("stu%d - your result : %d status- PASS\n", row, result);
        }else{
            printf("stu%d - your result : %d status- FAIELD\n", row, result);
        }
        
        printf("\n");
        }
}

