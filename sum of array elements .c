#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i,sum=0;
	
	printf("\n Enter any 5 Elements of Array A");
	
	for(i=0;i<5;i++)
	{
		printf("\n Enter any Number: ");
		scanf("%d",&a[i]);
	}
	
	printf("\n Displaying Numbers: ");
	
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	
	printf("\n Sum of Array Elements=%d",sum);
}
