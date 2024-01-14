#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5],b[5],c[5],i;
	
	printf("\n Accepting Elements of Array A");
	for(i=0;i<5;i++)
	{
		printf("\n Enter Any Number: ");
		scanf("%d",&a[i]);
	}
	printf("\n Accepting Elements of Array B");
	for(i=0;i<5;i++)
	{
		printf("\n Enter Any Number: ");
		scanf("%d",&b[i]);
	}
	printf("\n Displaying Subtraction OF Array A and B");
		for(i=0;i<5;i++)
	{
		c[i]=a[i]-b[i];
		printf(" %d ",c[i]);
}   

	
	
}
