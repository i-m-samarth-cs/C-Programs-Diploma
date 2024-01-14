#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5],i,large;
	
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
	
	large=a[0];
	for(i=0;i<5;i++)
	{
		if(large<a[i])
		{
			large=a[i];
	 	}
}

	printf("\n largest Element of Array A is %d",large);
		



}
