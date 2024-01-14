#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	
	printf("Enter any Number");
	scanf("%d",&num);
	
	if(num>100)
	{
		printf("Number=%d is Greater than 100",num);
	}
	else
	{
		printf("Number=%d is Smaller than 100",num);
	}
}
