#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],b[5],c[5],i,*ptr;
	int *p=&b[0],*sum=&c[0];
	ptr=&a[0];
	printf("\n Accepting any 3 Elements of Array A");
	
	for(i=0;i<3;i++)
	{
		printf("\n Enter Any number");
		scanf("%d", ptr);
		ptr++;
	}
	
	printf("\n Accepting any 3 Elements of Array B");
	
	for(i=0;i<3;i++)
	{
		printf("\n Enter Any number");
		scanf("%d", p);
		p++;
	};
	
	printf("\n Displaying Addition of 2 Arrays:");
	for(i=0;i<3;i++)
	{
		sum[i]=a[i]+b[i];
		printf("\n %d ",*sum);
		sum++;
		
	}
	
	
	
	
}
