#include<stdio.h>
union stdata
{
    int id;
    char nm[20];
};
void main()
{
       union stdata st;
       printf("Enter student id:");
       scanf("%d",&st.id);
       printf("Enter student name:");
       scanf("%s",&st.nm);
       printf("\nStudent id is:%d and name is:%s",st.id,st.nm);
}