#include<stdio.h>
#include<conio.h>

float area(int rad);

int main()
{
	int radius,x;
	
	printf("\n Enter Radius of Circle: ");
	scanf("%d",&radius);
	
	x=area(radius);
	printf("\n Area of Circle=%f",x);
}

float area(int rad)
{
	int ar,radius;
	
	ar=3.14*radius*radius;
	
	return ar;
}
