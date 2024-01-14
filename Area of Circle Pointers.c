#include<stdio.h>
#include<conio.h>
#define PI 3.14

void main()
{
	int rad;
	int *ptr=&rad;
	float area;
	
	printf("\n Enter Radius of Circle: ");
	scanf("%d",&rad);
	
	area=PI*(*ptr)*(*ptr);
	
	printf("\n Area of Circle=%f",area);
}

