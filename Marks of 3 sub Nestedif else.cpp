#include<stdio.h>
#include<conio.h>

int main()
{
	float m1,m2,pic,total,avg;
	
	printf("\n Enter the marks of Three Subjects: ");
	scanf("%f%f%f",&m1,&m2,&pic);
	
	total=m1+m2+pic;
	avg=total/3.0;
	
	printf("\n Total=%f and Average=%f",total,avg);
	
	if(m1>=40 && m2>=40 && pic>=40)
	{
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
			printf("\n grade C");
		}
		else
		{
			
		}
	}
	else
	{
		printf("\n Fail");
	}
}
