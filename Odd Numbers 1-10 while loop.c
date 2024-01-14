#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1;
	
	printf("\n Displaying ODD Numbers between 1-10");
	
	while(i<=10)
	{
		if(i%2!=0)
		{
			printf("\n %d",i);
		}
		i++;
	}
}
