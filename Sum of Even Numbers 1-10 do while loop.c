#include<stdio.h>
#include<conio.h>

void main()
{
	int i=15,sum=0;
	
	printf("\n Displaying Sum of Even Numbers between 15-50");
	
	do
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
		i++;
	}
	while(i<=50);
	printf("\n Sum=%d",sum);
}
