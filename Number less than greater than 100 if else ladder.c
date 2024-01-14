#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	
	printf("\n Enter any number");
	scanf("%d",&num);
	
	if(num>100)
	{
		printf("\n Number=%d is Greater than 100",num);
	}
	else if(num<100)
	{
		printf("\n Number=%d is Less than 100",num);
	}
	else
	{
		printf("\n Number is equal to 100");
	}
}
