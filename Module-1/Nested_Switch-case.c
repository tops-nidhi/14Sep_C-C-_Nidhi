#include<stdio.h>
void main()
{
    int ch;
    int n;
    printf("1.Case1\n\t1.CaseA\n\t2.CaseB\n2.Case2\n3.Case3\n\t1.Case");
    printf("\nEnter your choice:");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
            printf("\nThis is case 1.");
            printf("\nEnter your choice:");
            scanf("%d",&n);
            switch (n)
            {
                case 1:
                    printf("\nThis is Case A.");
                    break;
                    
                case 2:
                    printf("\nThis is Case B.");
                    break;
                default:
                    printf("\nEnter vaild choice................");
                    break;
            }
            break;
        case 2:
            printf("\nThis is case 2.");
            break;

        case 3:
            printf("\nThis is case 3.");        
            printf("\nEnter your choice:");
            scanf("%d",&n);
            switch (n)
            {
                case 1:
                    printf("\nThis is Case A.");
                    break;
                default:
                    printf("\nEnter vaild choice.......");        
                    break;
            }
    }
}