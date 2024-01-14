#include<stdio.h>
#include<conio.h>

void main()
{
	char str1[10],str2[10];
	int i=0,flag=0;
	
	printf("\n Enter 1st String: ");
	scanf("%s",str1);
	
	printf("\n Enter 2nd String: ");
	scanf("%s",str2);
	
	while(str1[i]!=NULL||str2[i]!=NULL)
	{
		if(str1[i]!=str2[i])
		{
			flag=1;
			i++;
		}	
	}
	if(flag==1)
	{
		printf("\n Both String Are not  Same: ");
	}
	else
	{
		printf("\n Both Strings Are Same: ");
	}
}
