#include<stdio.h>
#include<conio.h>

int main()
{
	int num,rem,sum=0;
	
	printf("\n Enter Any Number of 4 Digits: ");
	scanf("%d",&num);
	
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num%10;
	}
	printf("\n Sum=%d",sum);
}
