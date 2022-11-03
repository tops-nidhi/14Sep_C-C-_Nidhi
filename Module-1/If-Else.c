#include<stdio.h>
void main()
{
    int age;
    printf("Enter your age to check elligible for vote or note:");
    scanf("%d",&age);
    if(age >= 18)
    {
        printf("Elligible for vote.");
    }
    else
    {
        printf("Not Eligible for vote.");
    }
}