#include<stdio.h>
void main()
{
    int no;
    printf("Enter no check wether if possitive or not:");
    scanf("%d",&no);
    if (no > 0)
    {
        printf("No is possitive.");
    }
    else if (no == 0)
    {
        printf("No is zero.");
    }
    
    else 
    {
        printf("No is negative.");
    }    
}