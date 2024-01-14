#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c;
	
	printf("\n Enter any Three Numbers");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b && a>c)
	{
		printf("\n A=%d is Largest",a);
	}
	else if(b>a && b>c)
	{
		printf("\n B=%d is Largest",b);
	}
	else if(c>a && c>b)
	{
		printf("\n C=%d is Largest",c);
	}
	else
	{
		printf("\n All Numbers Are Same");
	}
}
