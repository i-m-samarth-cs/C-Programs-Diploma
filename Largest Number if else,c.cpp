#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;
	
	printf("\n Enter any two Numbers");
	scanf("%d%d",&a,&b);
	
	if(a>b)
	{
		printf("\n A=%d is Largest",a);
	}
	else
	{
		printf("\n B=%d is Largest",b);
	}
}
