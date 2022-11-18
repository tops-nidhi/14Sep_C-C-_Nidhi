#include<stdio.h>
int main()
{
    FILE *fptr;
    char str[20];
    fptr=fopen("D:/nidhi batch/14sep_c_c++/module-1/hello.txt","a");
    fprintf(fptr,"Hello");
    fclose(fptr);
    fptr=fopen("D:/nidhi batch/14sep_c_c++/module-1/hello.txt","r");
    fscanf(fptr,"%s",&str);
    printf("%s",str);
    return 0;
}