#include<stdio.h>
#include<conio.h>

int rev(int num);

void main()
{
	int a,reverse;
	
	printf("\n Enter Any Number:");
	scanf("%d",&a);
	
	reverse=rev(a);
	printf("\n Reversed Number=%d",reverse);
}

int rev(int num)
{
	int rem=0,rev=0;
	
	rem=num%10;
	rev=(rev*10)+rem;
	num=num/10;
	
	return rev;
}
