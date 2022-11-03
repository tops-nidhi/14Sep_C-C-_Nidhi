#include<stdio.h>
int a;
int getdata()
{
    printf("Enter value of a:");
    scanf("%d",&a);
    return 0;
}
int showdata()
{
    return a;
}
int main()
{
    getdata();
    printf("Value of a is:%d",showdata());
    return 0;
}