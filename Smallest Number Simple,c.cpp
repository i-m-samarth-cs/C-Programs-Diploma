#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,min;
	
	printf("Enter any two Numbers");
	scanf("%d%d",&a,&b);
	
	min=(a<b)?a:b;
	
	printf("\n The Given Numbers are %d and %d",a,b);
	printf("\n The Smallest Number is %d",min);
	
}
