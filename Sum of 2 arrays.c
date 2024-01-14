#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],b[5],c[5],i;
	
	printf("\n Accepting Five Elements of Array A");
	
	for(i=0;i<5;i++)
	{
		printf("\n Enter Any Number");
		scanf("%d",&a[i]);
	}
	 printf("\n Displaying elements of Array A");
	 
	for(i=0;i<5;i++)
	{
	 	printf("\n %d",a[i]);
    }
    
    printf("\n Accepting Five Elements of Array B");
    
    for(i=0;i<5;i++)
    {
    	printf("\n Enter Any Number");
		scanf("%d",&b[i]);
	}
	
	printf("\n Displaying Elements of Array B");
	
	for(i=0;i<5;i++)
	{
		printf("\n %d",b[i]);
	}
	
	printf("\n Displaying Sum of 2 arrays");
	
	for(i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];
		printf(" %d ",c[i]);
	}
}
