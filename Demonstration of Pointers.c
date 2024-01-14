#include<stdio.h>
#include<conio.h>

void main()
{
	int a=10;
	int *b=&a;
	
	//1.Variable Acessinging itself
	printf("\n Value of A=%d",a);
	printf("\n Address of A=%u",&a);
	
	//2.Pointer Accessing Itself
	printf("\n Value of Pointer B=%u",b);
	printf("\n Address of Pointer B=%u",&b);
	
	//3.Pointer Accessing Other Variables
	printf("\n Value of A=%d",*b);
	printf("\n Address of A=%u",b);
	
}
