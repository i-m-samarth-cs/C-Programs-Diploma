#include<stdio.h>
#include<conio.h>

void display (int num);

void main()
{
	int a;
	
	printf("\n Enter Any Number");
	scanf("%d",&a);
	
	printf("\n Before Function Call A=%d",a);
	
	display(a);
	printf("\n After Function Call A=%d",a);
}
void display (int num)
{
	printf("\n Before Changing Number=%d",num);
	
	num=50;
	
	printf("\n After Changing Number=%d",num);
}

