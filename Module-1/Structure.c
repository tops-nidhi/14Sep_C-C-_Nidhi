#include<stdio.h>
struct stdata
{
    int id;
    char nm[20];
}st;

int main()
{
    // struct stdata st;
    printf("Enter student id:");
    scanf("%d",&st.id);
    printf("Enter student name:");
    scanf("%s",&st.nm);
    printf("\nStudent id is is:%d and name is:%s",st.id,st.nm);
}