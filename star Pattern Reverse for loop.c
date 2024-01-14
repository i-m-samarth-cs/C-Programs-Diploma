#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	
	printf("\n Displaying star pattern");
	
	for(i=1;i<=4;i++)
	{
		printf("\n");
		
		for(j=4;j>=i;j--);
		{
			printf("*");
		}
	}
}
