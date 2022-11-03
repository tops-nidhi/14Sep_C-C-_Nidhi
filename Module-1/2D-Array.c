#include<stdio.h>
int a[3][3];
int i,j;
int getdata()
{
    printf("\nEnter value:-");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\na[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    return 0;
}
int printdata()
{
    printf("\nEntered values are:-");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3 ; j ++)
        {
            printf("\na[%d][%d]:\t%d",i,j,a[i][j]);
        }
    }
    return 0;
}
int main()
{
    getdata();
    printdata();
}