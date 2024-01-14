#include<stdio.h>
#include<conio.h>

void main()
{
	int a[2][2],i,j;
	
	printf("\n Accepting any 4 Elements of Array");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n Enter Any Number: ");
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n\n Displaying Elements Of Array\n\n ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n\n");
	}
	
}
