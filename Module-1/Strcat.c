#include<string.h>
#include<stdio.h>
int main()
{
    char fnm[10], lnm[10];
    printf("Enter your First name:");
    scanf("%s",&fnm);
    printf("Enter your last name:");
    scanf("%s",&lnm);
    strcat(fnm,lnm);
    printf("\nYour full name is:%s",fnm);
    return 0;
}
