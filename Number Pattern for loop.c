#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	
	printf("\n Displaying Numbers pattern: ");
	
	for(i=1;i<=4;i++)
	{
		printf("\n");
		
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
	}
}
