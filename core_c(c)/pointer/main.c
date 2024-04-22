#include <stdio.h>

int main() {
    int x = 10;
    int *ptr;
    
    ptr = &x;
    
    // printf("%d", ptr);
    // printf("%d", *ptr);

    return 0;
}

#include <stdio.h>

int main() {
    int x = 10;
    int *ptr;
    int **ptr1;
    ptr = &x;
    ptr1 = &ptr;
    
    // printf("%d", ptr);
    // printf("%d", *ptr);
    printf("%d", **ptr1);

    return 0;
}

#include <stdio.h>

int sum(int *a, int *b){
    return *a+*b;
}

int main() {
    int x = 10, y = 20;
    printf("%d", sum(&x, &y));

    return 0;
}