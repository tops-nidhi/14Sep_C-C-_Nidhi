#include<stdio.h>
struct stdata
{
    int id;
    char nm[20];
};

int main()
{
    struct stdata st[5];
    int count;
    printf("Enter the no of student:");
    scanf("%d",&count);
    int i;
    for ( i = 0; i < count; i++)
    {
        printf("Enter student id:");
        scanf("%d",&st[i].id);
        printf("Enter student name:");
        scanf("%s",&st[i].nm);
    }
    for ( i = 0; i < count; i++)
    {
        printf("\nStudent id is is:%d and name is:%s",st[i].id,st[i].nm);
    }
}