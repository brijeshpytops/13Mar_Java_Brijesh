#include<stdio.h>

void main()
{

    FILE *fp;
    fp = fopen("myfile.txt", "r");
    if (fp == NULL) {
        printf("File does not exist.");
    }

    fclose(fp);
}
