#include<stdio.h>
#include<conio.h>

void main()
{
	int a,*x;
	
	printf("\n Enter Any Number: ");
	scanf("%d",&a);
	
	x=&a;
	
	printf("\n Value of A=%d",*x);
	printf("\n Address of A=%u",x);
}
