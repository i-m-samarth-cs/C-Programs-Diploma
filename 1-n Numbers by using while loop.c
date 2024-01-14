#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,n;
	
	printf("\n Enter the Value of n");
	scanf("%d",&n);
	
	printf("\n Displaying 1 to %d Numbers: ",n);
	
	while(i<=n)
	{
		printf("\n %d",i);
		i++;
	}

}
