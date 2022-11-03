#include<stdio.h>
void getdata(int a)
{
    printf("Value of a is:%d",a);
}
void main()
{
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    getdata(a);
}