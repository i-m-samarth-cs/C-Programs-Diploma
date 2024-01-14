#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i,pos=0,neg=0;
	
	printf("\n Accepting Elements of Array: ");
	for(i=0;i<5;i++)
	{
		printf("\n Enter any Number: ");
		scanf("%d",&a[i]);
	}
	
	printf("\n Displaying Elements of Array ");
	for(i=0;i<5;i++)
	{
		printf(" %d ",a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]>0)
		{
			pos++;
		}
		else if(a[i]<0)
		{
			neg++;
		}
		else
		{
			//No Action
		}	
	}
	
	printf("\n Positive Numbers=%d",pos);
	printf("\n Negative Numbers=%d",neg);
}
