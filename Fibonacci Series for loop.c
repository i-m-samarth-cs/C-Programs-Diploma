#include<stdio.h>
#include<conio.h>

void main()
{
	int f1=0,f2=1,f3=0,i=1;
	
	printf("\n Displaying Fibonacci Series of 1st Ten Numbers: ");
	
	for(i=1;i<=10;i++)
	{
		printf(" %d ",f3);
		
		f1=f2;
		f2=f3;
		f3=f1+f2;
	}
}
