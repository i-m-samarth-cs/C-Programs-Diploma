#include<stdio.h>
#include<conio.h>

void main()
{
	int num,i=2,flag=0;
	
	printf("\n Enter any Number");
	scanf("%d",&num);
	
	while(i<num)
	{
		if(num%i==0)
		{
			flag=1;
			break;
		}
		i++;
	}
	if(flag==1)
	{
		printf("\n Number is Not Prime");
	}
	else
	{
		printf("\n Number is Prime");
	}
}
