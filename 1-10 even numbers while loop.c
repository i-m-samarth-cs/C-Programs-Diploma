#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1;
	
	printf("\n Displaying All Even Numbers from 1-10");
	
	while(i<=10)
	{
		if(i%2==0)
		{
			printf("\n %d",i);
		}
		i++;
	}
}
