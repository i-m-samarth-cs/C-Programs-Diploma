#include<stdio.h>
#include<conio.h>

void main()
{
	int a=10;
	int *x=&a;
	
	//1.Addition
	printf("\n Before Addition Address of Pointer X=%u",x);
	x=x+2;
	printf("\n After Addition Address of Pointer X=%u",x);
	
	//2.Subtraction
	printf("\n Before Subtraction Address of Pointer X=%u",x);
	x=x-2;
	printf("\n After Subtraction Address of Pointer X=%u",x);
	
	//3.Increment
	printf("\n Before Increment Address of Pointer X=%u",x);
	x++;
	printf("\n After Increment Address of Pointer X=%u",x);
	
	//4.Decrement
	printf("\n Before Decrement Address of Pointer X=%u",x);
	x--;
	printf("\n After Decrement Address of Pointer X=%u",x);
}
