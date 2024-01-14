#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i,small;
	
	printf("\n Accepting any 5 Elements of Array A");
	for(i=0;i<5;i++)
	{
		printf("\n Enter AnyNumber: ");
		scanf("%d",&a[i]);
	}
	
	printf("\n Displaying Elements of Array A ");
	for(i=0;i<5;i++)
	{
		printf(" %d ",a[i]);
	}
	
	small=a[0];
	for(i=0;i<5;i++)
	{
		if(small>a[i])
		{
			small=a[i];
	 	}
}

	printf("\n Smallest Element of Array A is %d",small);
		



}
