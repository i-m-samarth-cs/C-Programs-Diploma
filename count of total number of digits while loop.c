#include<stdio.h>
#include<conio.h>

void main()
{
    int num,count=0;
	
	printf("\n Enter any Number");
	scanf("%d",&num);
	
	while(num>0)
	{
		count++;
		num=num/10;
	}
	
	printf("\n Number of digits=%d",count);
}
