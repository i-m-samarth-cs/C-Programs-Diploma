#include<stdio.h>
#include<conio.h>

void main()
{
	float a[10];
	int i;
	
	printf("\n Accepting Percentage of 10 Students: ");
	
	for(i=0;i<10;i++)
	{
		printf("\n Enter Percentage: ");
		scanf("%f", &a[i]);
	}
	
	printf("\n Displaying Percentage of All 10 Students");
	
	for(i=0;i<10;i++)
	{
		printf("\n %f",a[i]);
	}
}
