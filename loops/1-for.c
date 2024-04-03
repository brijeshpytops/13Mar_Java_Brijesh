# Example-1:
#include <stdio.h>

void main() {
    int end = 10, table = 100;
    
    for (int start = 1; start<=end; start+=1){
        printf("%d * %d = %d\n",table, start, (table * start));
    }
   
}

# Example - 2:
#include <stdio.h>

void main() {
    int end = 10;
    
    for (int start = 1; start<=end; start+=1){
        printf("%d\n",start*start*start);
    }
   
}