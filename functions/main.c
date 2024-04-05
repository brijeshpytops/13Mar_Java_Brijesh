
#include <stdio.h>

void main() {
    int x = 10;
    
    void test(){
        x = 20;
        printf("%d", x);
    }
    
    printf("%d\n", x);
    
    test();

}