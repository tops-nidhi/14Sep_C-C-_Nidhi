#include<stdio.h>
union stdata
{
    int id;
    char nm[20];
};
int main()
{
    union stdata st[5];
    int i;
    for ( i = 0; i < 3; i++)
    {
        printf("\nEnter %d student id:",i+1);
        scanf("%d",&st[i].id);
        printf("Enter %d student name:",i+1);
        scanf("%s",&st[i].nm);
    }
    for ( i = 0; i < 3; i++)
    {
        printf("\nStudent %d id is:%d and name is:%s",i+1,st[i].id,st[i].nm);
    }
    
}