#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    printf("\nBefore value swapping value of a is:%d and b is:%d",a,b);
    /*
    a = 10;
    b = 15;
    */
    c = a; //c = 10;
    a = b; //a = 15;
    b = c; //b = 10;
    printf("\nAfter value swapping value of a is:%d and b is:%d",a,b);
    return 0;
}