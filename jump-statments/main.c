#include <stdio.h>

int main() {
    
    for(int num = 1; num<=10; num+=1){
        if (num == 2 || num == 3){
            continue;
        }
        
        if (num == 7){
            break;
        }
        printf("%d\n", num);
    }

    return 0;
}