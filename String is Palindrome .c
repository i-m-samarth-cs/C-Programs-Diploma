#include<stdio.h>
#include<conio.h>

int main()
{
	char str1[10],str2[10];
	int i=0,j=0;
	
	printf("\n Enter Any String: ");
	scanf("%s",str1);
	
	printf("\n Given String is %s",str1);
	
	while (str1[i]!=NULL)
	{
		i++;
	}
	j=i-1;
	
	i=0;
	
	whlie (str1[i]!='\0')
	{
		str2[j]=str1[i];
		i++;
		j--;
	}
	
	str2[i]=NULL;
	
	if(str2[j]=str1[i])
	{
		printf("\n String is Palindrome");
	}
	else
	{
		printf("\n String is not Palindrome");
	}
}
