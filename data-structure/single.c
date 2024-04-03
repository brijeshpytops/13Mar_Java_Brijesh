#include <stdio.h>

int main() {
    
 int students[10] = {78, 89, 56, 90, 45, 34, 90, 98, 68, 93};
 
 printf("Stu1: %d\n", students[0]);
 printf("Stu2: %d\n", students[1]);
 printf("Stu3: %d\n", students[2]);
 printf("Stu11: %d\n", students[10]);
 printf("Stu11: %d\n", students[11]);

}

#include <stdio.h>

int main() {
    int students[10];
    for(int s = 1; s<=10;s++){
        printf("[%d]Enter scor for: stu%d- ",s-1, s);
        scanf("%d", &students[s-1]);
    }
    
    for(int s = 1; s<=10; s++){
        
        if(students[s-1] >= 35){
            printf("stu-%d : score-%d status- PASS\n", s, students[s-1]);
        }else{
            printf("stu-%d : score-%d status- FAILED\n", s, students[s-1]);
        }
        
    }
    
}