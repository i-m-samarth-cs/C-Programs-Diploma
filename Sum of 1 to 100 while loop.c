#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,sum=0;
	
	printf("\n Sumof 1 to 100 is");
	
	while(i<=100)
	{
		sum=sum+i;
		i++;
	}
	printf("%d",sum);
}
