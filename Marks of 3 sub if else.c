#include<stdio.h>
#include<conio.h>

void main()
{
	int m1,m2,pic,sum;
	float avg;
	
	printf("Enter the Marks of three Subjects");
	scanf("%d%d%d",&m1,&m2,&pic);
	
	sum=m1+m2+pic;
	avg=sum/3.0;
	
	printf("Sum=%d and Average=%f",sum,avg);
	
	if(avg>=40)
	{
		printf("\n Pass");
	}
	else
	{
		printf("\n Fail");
	}
}
