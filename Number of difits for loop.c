#include<stdio.h>
#include<conio.h>

void main()
{
	int num,count=0;
	
	printf("\n Enter any number: ");
	scanf("%d",&num);
	
	for(;num>0;)
	{
		count++;
		num=num/10;
	}
	
	printf("\n Number of Digits=%d",count);
}
