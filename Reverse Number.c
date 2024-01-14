#include<stdio.h>
#include<conio.h>

void main()
{
	int num,rem,rev=0;
	
	printf("\n Enter any Number:");
	scanf("%d",&num);
	
	while(num>0)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
	}
	
	printf("\n Reverse Number=%d",rev);
}
