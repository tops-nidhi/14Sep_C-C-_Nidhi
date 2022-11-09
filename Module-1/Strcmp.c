#include<stdio.h>
#include<string.h>
int main()
{
    int cmp;
    char str1[20],str2[20];
    printf("Enter 1st string:");
    scanf("%s",&str1);
    printf("\nenter 2nd string:");
    scanf("%s",&str2);
    cmp = strcmp(str1,str2);
    if (cmp > 0)
        printf("\n%s is max.",str1);
    else if (cmp == 0)
    {
        printf("\nBoth string are equle.");
    }
    else
        printf("\n%s is max.",str2);
    
}