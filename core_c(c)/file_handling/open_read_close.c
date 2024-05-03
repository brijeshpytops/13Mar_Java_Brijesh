#include<stdio.h>

void main()
{

    FILE *fp;
    char ch;
    fp = fopen("example.txt", "r");

    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }
    
    fclose(fp);
}
