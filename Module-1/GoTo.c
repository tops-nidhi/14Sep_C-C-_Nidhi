#include<stdio.h>
void main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        if (i == 5)
            goto done;
        printf("\nVlaue of i is:%d",i);
    }
    done:
        printf("\nThis is goto lable.");
}