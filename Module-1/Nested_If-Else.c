#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter 1st no:");
    scanf("%d",&a);
    printf("Enter 2nd no:");
    scanf("%d",&b);
    printf("Enter 3rd no:");
    scanf("%d",&c);
    if(a > b)
    {
        if(a > c)
        {
            printf("A is max.");
        }
        else
        {
            printf("C is max.");
        }
    }
    else
    {
        if(b > c)
        {
            printf("B is max.");
        }
        else
        {
            printf("C is max.");
        }
    }
}