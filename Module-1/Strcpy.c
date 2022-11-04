#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10],str2[10];
    printf("Enter the 1st string:");
    scanf("%s",&str1);
    strcpy(str2,str1);
    printf("\n2nd string is:%s",str2);
    return 0;
}
