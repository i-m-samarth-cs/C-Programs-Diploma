#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,sum;
	int *x=&a,*y=&b;
	
	printf("\n Enter any 2 Numbers:");
	scanf("%d%d",&a,&b);
	
	sum=*x+*y;
	
	printf("\n Sum=%d",sum);
}
