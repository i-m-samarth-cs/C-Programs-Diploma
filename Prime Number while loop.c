#include<stdio.h>
#include<conio.h>

int main()
{
	int num,i=2,flag=0;
	
	printf("\n Enter Any Number");
	scanf("%d",num);
	
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
		printf("\n Number is not Prime");
	}
	else
	{
		printf("\n Number is Prime");
	}
}
