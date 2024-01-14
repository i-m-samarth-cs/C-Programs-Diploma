#include<stdio.h>
#include<conio.h>

int main()
{
	int i;
	
	printf("\n Demonstrating Break Statement: ");
	
	for(i=1;i<=5;i++)
	{
		if(i==3)
		{
			break;
		}
		else
		{
			printf("%d",i);
		}
	}
}
