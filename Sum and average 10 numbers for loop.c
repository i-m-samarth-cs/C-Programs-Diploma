#include<stdio.h>
#include<conio.h>

void main()
{
	int i,sum=0,num;
	float avg;
	
	printf("\n Accepting Any 10 Numbers: ");
	
	for(i=1;i<=10;i++)
	{
		printf("\n Enter Any Number: ");
		scanf("%d",&num);
		
		sum=sum+num;
	}
	
	avg=sum/10.0;
	
	printf("\n Sum=%d and Average=%f",sum,avg);
}
