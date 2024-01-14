#include<stdio.h>
#include<conio.h>

void main()
{
	char str1[10],str2[10];
	int i=0;
	
	printf("\n Enter Any String: ");
	scanf("%s",str1[i]);
	
	while(str1[i]!='\0')
	{
		str2[i]=str1[i];
		i++;
	}
	
	str2[i]=NULL;
	
	printf("\n String-1=%s",str1);
	printf("\n String-2=%s",str2);
	
	printf("\n Number of Elements Copied is %d",i);
	
}
