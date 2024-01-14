#include<stdio.h>
#include<conio.h>

int num();

int main()
{
	int x,;
	
	x=num();
	

	
}

int num()
{
	int no;
	
	printf("\n Enter any Number: ");
	scanf("%d",&no);
	
	if(no%2==0)
	{
		printf("\n Number=%d is Even",no);
	}
	else if(no%2!=0)
	{
		printf("\n Number=%d is Odd ",no);
	}
	else
	{
		printf("\n Number is Zero");
	}
	
	
	
	return no;
}
