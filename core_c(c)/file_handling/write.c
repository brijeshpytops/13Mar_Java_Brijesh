#include<stdio.h>

void main()
{

    FILE *fp;
    fp = fopen("example.txt", "w");
    fprintf(fp, "This is a python code.\n");
    fclose(fp);
}
