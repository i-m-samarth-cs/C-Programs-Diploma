#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i;
	
	printf("\n Accepting Any Five Elements of Array A");
	
	for(i=0;i<5;i++)
	{
		printf("\n Enter any Number: ");
		scanf("%d",a[i]);
	}
	
	printf("\n Displaying Even Numbers of the Array: ");
	
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
			printf("\n %d",a[i]);
		}
	}
	
}
