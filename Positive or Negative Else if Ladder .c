#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	
	printf("\n Enter any Number");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("\n Number=%d is Positive",num);
	}
	else if(num<0)
	{
		printf("\n Number=%d is Negative",num);
	}
	else
	{
		printf("\n Number= is Zero");
	}
} 

