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

// soft delete


#include <stdio.h>

int main() {
    char name[] = {
        'b', 'r', 'i', 'j', 'e', 's', 'h'
    };
    name[0] = 'z';
    for(int start = 0; start<=6; start++){
        // printf("%d - %c\n", start, name[start]);
        if (start == 2 || start == 3){
            continue;
        }
        printf("%c",name[start]);
    }
    
    

    return 0;
}
