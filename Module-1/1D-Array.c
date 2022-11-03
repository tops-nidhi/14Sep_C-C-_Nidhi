#include<stdio.h>
int main()
{
    int id[5];
    int i;

    for (i = 0; i < 5; i ++)
    {
        printf("Enter %d index value:",i+1);
        scanf("%d",&id[i]);
    }
    for(i = 0; i < 5; i++)
    {
        printf("\nValue of %d index is:%d",i+1,id[i]);
    }
}