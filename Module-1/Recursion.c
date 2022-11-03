#include<stdio.h>
long int fecto (int no)
{
    if (no <= 1)
        return 1;
    return no * fecto(no - 1);
}
int main()
{
    int no;
    printf("Enter no to get it's fectorial:");
    scanf("%d",&no);
    printf("Fectorial of %d is:%ld",no,fecto(no));
}