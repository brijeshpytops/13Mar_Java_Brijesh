#include <stdio.h>

void main() {
    int start = 1, end = 10, table = 100;
    
    do{
        printf("%d * %d = %d\n",table, start, (table * start));
        start+=1;
    }while(start <= end);
   
}