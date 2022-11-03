#include<stdio.h>
void main()
{
    int i;
    int no;
    int flag=0;
    printf("Enter a number that you want to check whther it prime or not:");
    scanf("%d",&no);
    for (i = 2; i < no; i++)
    {
        if (no %i == 0)
        {
            flag=1;
            goto prime;
        }
    }
    prime:
        if (flag == 0)
            printf("\n%d is prime.",no);
        else
            printf("\n%d is not prime.",no);
}