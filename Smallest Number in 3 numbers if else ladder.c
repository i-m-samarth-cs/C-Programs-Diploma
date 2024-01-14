#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	
	printf("\n Enter any 3 Numbers");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a<b && a<c)
	{
		printf("\n A=%d is Smallest",a);
	}
	else if(b<a && b<c)
	{
		printf("\n B=%d is Smallest",b);
	}
	else if(c<a && c<b)
	{
		printf("\n C=%d is Smallest",c);
	}
	else
	{
		printf("\n All Numbers are Same");
	}
}
