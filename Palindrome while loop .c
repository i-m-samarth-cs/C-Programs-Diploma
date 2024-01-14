#include<stdio.h>
#include<conio.h>

void main()
{
	int num,rem, rev=0,no;
	
	printf("\n Enter any Number: ");
	scanf("%d",num);
	
	no=num;
	
	while(num>0)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
	}
	if(rev==no)
	{
		printf("\n Number=%d is Palindrome: ",no);
	}
	else
	{
		printf("\n Number=%d is not a Palindrome",no);
	}
}
