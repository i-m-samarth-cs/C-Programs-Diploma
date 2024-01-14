#include<stdio.h>
#include<conio.h>

int area();

void main()
{
	float x;
	
	x=area();
	
	printf("\n Area of Circle=%f",x);
}

int area()
{
	int rad;
	float ar;
	
	printf("\n Enter Radius of the Circle");
	scanf("%d",&rad);
	
	ar=3.14*rad*rad;
	
	return ar;
}
