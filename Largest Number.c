#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,max;
	
	printf("\n Enter any Two Numbers: ");
	scanf("%d%d",&a,&b);
	
	max=(a>b)?a:b;
	
	printf("\n Given Two Numbers are %d and %d",a,b);
	printf("\n The Largest Number is %d",max);
	
}
