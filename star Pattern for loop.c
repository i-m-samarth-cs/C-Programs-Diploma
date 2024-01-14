#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	
	printf("\n Printing Star Pattern: ");
	
	for(i=0;i<=5;i++)
	{
		printf("\n");
		
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
	}
}
