#include<stdio.h>
#include<conio.h>

void main()
{
	int num,rem,sum=0,no;
	
	printf("\n Enter any 3 Digits Number");
	scanf("%d",&num);
	
	no=num;
	
	while(num<0)
	{
		rem=num%10;
		sum=sum+(rem*rem*rem);
		num=num/10;
	}
	if(sum==no)
	{
		printf("\n Number=%d is an Armstrong number",no);
	}
	else
	{
		printf("\n Number=%d is not an Armstrong Number",no);
	}
}
