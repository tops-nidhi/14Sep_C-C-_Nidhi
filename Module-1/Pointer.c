#include<stdio.h>
int main()
{
    int a=100;
    int *ptr;
    ptr = &a;
    // printf("\nAddress of the a is:%d",ptr);
    // ++ptr;
    // printf("\nAfter increment address is:%d",ptr);
    // printf("\nVlaue of a is:%d",*ptr);
    *ptr = 13;
    printf("\nVlaue of a is:%d",a);
    ++*ptr;
    printf("\nAfter increment value of a is:%d",a);
    return 0;
}