#include<stdio.h>
#include<conio.h>

void main()
{
	char str1[10],str2[10];
	int i=0,j=0;
	
	printf("\n Enter any String: ");
	scanf("%s",str1);
	
	printf("\n Given String is %s",str1);
	
	while(str1[i]!=NULL)
	{
		i++;
	}
	j=i-1;
	
	i=0;
	while(str1[i]!=NULL)
	{
		str2[j]=str1[i];
		i++;
		j--;
	}
	str2[i]=NULL;
	printf("\n Reverse String is %s",str2);
	
}
