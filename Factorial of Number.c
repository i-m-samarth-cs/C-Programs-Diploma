#include<stdio.h>
#include<conio.h>

void main()
{
	int num,i=1;
	long int fact=1;
	
	printf("\n Enter any Number: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	
	printf("\n Factorial=%ld",fact);
}
