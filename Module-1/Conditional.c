#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter 2 no to check max no:");
    scanf("%d%d",&a,&b);
    (a > b) ? (printf("A is max.")) : (printf("B is max."));
}