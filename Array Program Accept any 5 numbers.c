#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i;
	
	printf("\n Accepting any 5 Elements of Array: ");
	
	for(i=0;i<5;i++)
	{
		printf("\n Enter Any Number: ");
		scanf("%d",&a[i]);
	}
	
	printf("\n Displaying Elements of Array A");
	
	for(i=0;i<5;i++)
	{
		printf("\n %d",a[i]);
	}
}
