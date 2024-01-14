#include<stdio.h>
#include<conio.h>

void main()
{
	int num,i=1;
	long int fact=1;
	
	printf("\n Enter any Number: ");
	scanf("%d",&num);
	
	while(i<=num)
	{
		fact=fact*i;
		i++;
	}
	
	printf("\n Factorial=%ld",fact);
}
