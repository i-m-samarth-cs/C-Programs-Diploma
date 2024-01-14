#include<stdio.h>
#include<conio.h>

int add(int x,int y);
int sub(int x,int y);
int multi(int x,int y);
int div(int x,int y);

void main()
{
	int a,b,ans;
	
	printf("\n Enter any 2 Numbers");
	scanf("%d%d",&a,&b);
	
	ans=add(a,b);
	printf("\n Addition=%d",ans);
	
	ans=sub(a,b);
	printf("\n Subtraction=%d",ans);
	
	ans=multi(a,b);
	printf("\n Multiplication=%d",ans);
	
	ans=div(a,b);
	printf("\n Division=%d",ans);
}

int add(int x,int y)
{
	return x+y;
}
int sub(int x,int y)
{
	return x-y;
}
int multi(int x,int y)
{
	return x*y;
}
int div(int x,int y)
{
	return x/y;
}
