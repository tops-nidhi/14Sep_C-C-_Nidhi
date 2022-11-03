#include<stdio.h>
void main()
{
    int a,n;
    printf("Enter 2 no:");
    scanf("%d%d",&a,&n);
    printf("\nAddition is:%d",a+n);
    printf("\nSubtraction is:%d",a-n);
    printf("\nMultiplication is:%d",a*n);
    printf("\nDivision is:%d",a/n);
    printf("\nModulo is:%d",a%n);
    a++;
    printf("\nAfter increment value of a is:%d",a);
    n--;
    printf("\nAfter decrement value of n is:%d",n);
}