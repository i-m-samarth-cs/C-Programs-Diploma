#include<stdio.h>
#include<conio.h>

void display();

int a=10;

void main()
{
	int b=20;
	printf("\n In main()function=>A=%d B=%d",a,b);
	
	display();
}

void display()
{
	int c=30;
	
	printf("\n In display()function=>A=%d C=%d",a,c);
}
