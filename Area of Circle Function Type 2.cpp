#include<stdio.h>
#include<conio.h>

void area(int rad);

int main()
{
	int radius;
	
	printf("\n Enter Radius of Circle: ");
	scanf("%d",&radius);
	
	area(radius);
}

void area(int rad)
{
	float ar;
	
	ar=3.14*rad*rad;
	
	printf("\n Area of Circle=%f",ar);
}

	

