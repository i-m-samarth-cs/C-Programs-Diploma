#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,sum=0,avg,num;
	
	do
	{
		printf("\n enter any number:");
		scanf("%d",num);
		
		sum=sum+num;
		i++;
	}
	while(i<=10);
	
	avg=sum/10.0;
	
	printf("\n Sum=%d and Average=%d",sum,avg);
}
