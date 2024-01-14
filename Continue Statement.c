#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	
	printf("\n Demonstrating Continue Statement: ");
	
	for(i=1;i<=10;i++)
	{
		if(i==6)
		{
			continue;
		}
		
		printf("%d",i);
	}
}
