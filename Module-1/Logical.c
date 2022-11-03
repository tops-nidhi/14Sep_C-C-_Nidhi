#include<stdio.h>
void main()
{
	int no1,no2;
	printf("Enter 2 no:");
	scanf("%d%d",&no1,&no2);
	if(! ((no1>0) || (no2<0)) )
	{
		printf("True.");
	}
	else
	{
		printf("False.");
	}
}
