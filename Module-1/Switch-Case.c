#include<stdio.h>
void main()
{
    int a,b;
    int ch;
    printf("Enter any 2 no:");
    scanf("%d%d",&a,&b);
    printf("\n1.Addion\n2.Subctraction\n3.Multiplucation\n4.Division\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
            printf("\nAddition is:%d",a+b);
            break;
        case 2:    
            printf("\nSubstrction is:%d",a-b);
            break;
        case 3:
            printf("\nMultiplication is:%d",a*b);
            break;
        case 4:
            printf("\nDivision is:%d",a/b);
            break;
        default:
            printf("Enter valid choice.");
            break;
    }
}