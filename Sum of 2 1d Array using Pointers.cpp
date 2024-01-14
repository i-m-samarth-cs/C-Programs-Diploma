#include<stdio.h>

int main()
{
	int a[5],b[5],c[5],i;
	int sum=0;
	int *ptr1,*ptr2,*ptr3;
	
	printf("\n Enter Any Element of Array A: ");
	for(i=0;i<5;i++)
	{
		printf("\n Enter Any Number: ");
		scanf("%d",&a[i]);
	}
	
	printf("\n Enter Any Element of Array B: ");
	for(i=0;i<5;i++)
	{
		printf("\n Enter Any Number: ");
		scanf("%d",&b[i]);
	}
	
	ptr1=a;
	ptr2=b;
	ptr3=c;
	
	for(i=0;i<5;i++)
	{
		*ptr3=*ptr1+*ptr2;
		ptr1++;
		ptr2++;
		ptr3++;
	}
	printf("\n Addition \n");
	for(i=0;i<5;i++)
	{
		printf("\n %d",c[i]);
	}
	return 0;
	
	
}
