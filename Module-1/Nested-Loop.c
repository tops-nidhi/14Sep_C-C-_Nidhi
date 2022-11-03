#include<stdio.h>
void main()
{
    int i,j;
    for (i = 0; i < 5; i++) // outer loop work for row
    {
        for (j = 0; j <= i; j++) // inner loop work for column
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}