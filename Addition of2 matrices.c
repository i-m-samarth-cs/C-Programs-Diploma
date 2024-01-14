#include<stdio.h>
#include<conio.h>

void main()
{
	int a[2][2],b[2][2],c[2][2],d[2][2],i,j;
	
	printf("\n Accepting any 4 Elements of Array");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n Enter Any Number: ");
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n\n Displaying Elements Of Array A \n\n ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n\n");
	}
	printf("\n Accepting any 4 Elements of Array B ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n Enter Any Number: ");
			scanf("%d",&b[i][j]);
		}
	}
		printf("\n\n Displaying Elements Of Array B \n\n ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",b[i][j]);
		}
		printf("\n\n");
}

        printf("\n Displaying Sum of Array A and B\n\n");
        for(i=0;i<2;i++)
        {
        	for(j=0;j<2;j++)
        	{
        		c[i][j]=a[i][j]+b[i][j];
        	    printf(" %d ",c[i][j]);
			}
        	
		}
		
		printf("\n\n");
		
		  printf("\n Displaying Product of Array A and B\n\n");
        for(i=0;i<2;i++)
        {
        	for(j=0;j<2;j++)
        	{
        		d[i][j]=a[i][j]*b[i][j];
        	    printf(" %d ",d[i][j]);
			}
        	
		}
		
		printf("\n\n");
}
