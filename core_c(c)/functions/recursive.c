
#include <stdio.h>

int fact(int num){
    if (num == 1){
        return 1;
    }else{
        return num * fact(num - 1);
    }
}

void main() {
    int x = 6;
    printf("%d", fact(x));
    // 5 * 4 * 3 * 2 * 1 = 120
    
}




#include <stdio.h>

int fact(int num){
    if (num == 1){
        return 1;
    }else{
        return num + fact(num - 1);
    }
}

void main() {
    int x = 6;
    printf("%d", fact(x));
    // 6 + 5 + 4 + 3 + 2 + 1 = 21
    
}