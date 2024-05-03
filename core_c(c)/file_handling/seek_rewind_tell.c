#include<stdio.h>

void main()
{

    FILE *fp;
    fp = fopen("example.txt", "r");
    int before_position = ftell(fp);
    printf("befor pos: %d\n", before_position);
    fseek(fp, 5, SEEK_SET);
    int after_position = ftell(fp);
    printf("after pos: %d\n", after_position);
    rewind(fp);

    int after_rewind_position = ftell(fp);
    printf("after_rewind_position: %d\n", after_rewind_position);

    fclose(fp);
}
