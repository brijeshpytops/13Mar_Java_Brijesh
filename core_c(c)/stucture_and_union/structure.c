#include <stdio.h>

 struct book{
       char name[100];
       float price;
       int page;
   };

int main() {
    struct book b1;
    b1.price = 300.34;
    b1.page = 1200;
    printf("Enter book-1 name: ");
    scanf("%s", b1.name);
    
    printf("Book name : %s\n", b1.name);
    printf("Book price : %f\n", b1.price);
    printf("Total Page : %d", b1.page);
    
    struct book b2;
    b2.price = 500.25;
    b2.page = 1500;
    printf("\nEnter book-2 name: ");
    scanf("%s", b2.name);
    
    printf("Book name : %s\n", b2.name);
    printf("Book price : %f\n", b2.price);
    printf("Total Page : %d", b2.page);
    

    return 0;
}