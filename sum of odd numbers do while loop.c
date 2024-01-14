#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,sum=0;
	
	printf("\n Displaying sum of all Odd Numbers from 1 to 20: ");
	
	do
	{
		if(i%2!=0)
		{
			sum=sum+i;
		}
		i++;
	}
	while(i<=20);
	printf("Sum=%d",sum);
}
