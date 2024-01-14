#include<stdio.h>
#include<conio.h>

int main()
{
	float a,b,div,mod;
	
	printf("Enter any Two Numbers ");
	scanf("%d%d",&a,&b);
	
	div=a/b;
	mod=a%b;
	
	printf("\n Division=%d",div);
	printf("\n Modulus=%d",mod);
}
