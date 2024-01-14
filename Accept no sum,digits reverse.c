#include<stdio.h>
#include<conio.h>

void main()
{
	int num,rem,sum=0,rev=0,count=0;
	int *ptr=num;
	
	printf("\n Enter Any Number: ");
	scanf("%d",&num);
	
	//1.Sum of Digits

	while(ptr>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num%10;
	}
	
	printf("\n Sum=%d",sum);


}
