#include<stdio.h>
int add(int a, int b)
{
    return a+b;
}
int main()
{
    int a,b;
    printf("Enter 2 no:");
    scanf("%d%d",&a,&b);
    printf("Addion is:%d",add(a,b));
}