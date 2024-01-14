#include<stdio.h>
#include<conio.h>

long fact (int num);

void main()
{
	int a;
	long f;
	
	printf("\n Enter Any Number");
	scanf("%d",&a);
	
	f=fact(a);
	
	printf("\n Factorial of %d is %ld",a,f);
}
long fact (int num)
{
	long f;
	if(num==1)
	{
		return 1;
	}
	else
	{
		f=fact(num-1)*num;
		return f;
	}
	return;
}
