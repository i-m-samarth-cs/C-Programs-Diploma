#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	
	printf("\n Enter Any Three Numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("\n A=%d is Largest",a);
		}
		else
		{
			printf("\n C=%d is Largest",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("\n B=%d is Largest",b);
		}
		else
		{
			printf("\n C=%d is Largest",c);
		}
	}
}
