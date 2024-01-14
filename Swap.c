#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,z;
	
	printf("\n enter any two Numbers");
	scanf("%d%d",&a,&b);
	
	printf("\n Before Swapping A=%d B=%d",a,b);
	
	z=a;
	a=b;
	b=z;
	
	printf("\n After Swapping A=%d B=%d",a,b);
}
