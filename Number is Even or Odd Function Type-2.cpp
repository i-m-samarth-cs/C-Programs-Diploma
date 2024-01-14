#include<stdio.h>
#include<conio.h>

void num(int no);

int main()
{
	int number;
	
	printf("\n Enter any number: ");
	scanf("%d",&number);
	
	num(number);
		
}

void num(int no)
{
	if(no%2==0)
	{
		printf("\n Number=%d is Even",no);
	}
	else if(no%2!=0)
	{
		printf("\n Number=%d is odd",no);
	}
	else if(no==0)
	{
		printf("\n Number is Zero");
	}
	else
	{
		
	}
}
