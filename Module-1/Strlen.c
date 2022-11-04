#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    int len;
    printf("Enter the string:");
    scanf("%s",&str);
    len = strlen(str);
    printf("\nLength of the string that you entered is:%d",len);
}