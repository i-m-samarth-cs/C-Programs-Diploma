#include<stdio.h>
#include<conio.h>

void main()
{
	float m1,m2,pic,avg,sum;
	
	printf("\n Enter the marks of 3 subjects");
	scanf("%f%f%f",&m1,&m2,&pic);
	
	sum=m1+m2+pic;
	avg=sum/3.0;
	
	printf("\nTotal=%f and average=%f",sum,avg);
	
	if(avg>=80)
	{
		printf("\n Grade A");
	}
	else if(avg>=60 && avg<80)
	{
		printf("\n Grade B");
	}
	else if(avg>=40 && avg<60)
	{
		printf("\n Grade C");
	}
	else
	{
		printf("\n Fail");
	}
}
