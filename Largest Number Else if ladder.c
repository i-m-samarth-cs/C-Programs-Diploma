#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	
	printf("Enter any Two Numbers");
	scanf("%d%d",&a,&b);
	
	if(a>b)
	{
		printf("A=%d is Largest",a);
	}
	else if(a<b)
	{
		printf("B=%d is Largest",b);
	}
	else
	{
		printf("Both Numbers %d and %d Are Same",a,b);
	}
}
