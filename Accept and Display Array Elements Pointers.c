#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i,*ptr;
	
	ptr=&a[0];
	printf("\n Accepting Any 5 Elements of Array A");
	
	for(i=0;i<5;i++)
	{
		printf("\n Enter Any Number: ");
		scanf("%d",ptr);
		ptr++;
	}
	
	ptr=&a[0];
	
	printf("\n Displaying  5 Elements of Array A\n\n");
	for(i=0;i<5;i++)
	{
		printf(" %d ",*ptr);
		ptr++;
	}
	
}
