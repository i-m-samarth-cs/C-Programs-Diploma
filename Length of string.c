#include<stdio.h>
#include<conio.h>

void main()
{
	char str[10];
	int i=0;
	
	printf("\n Enter Any String: ");
	scanf("%s",str);
	
	while(str[i]!=NULL);
	{
		i++;
	}
	
	printf("\n Length of String is %d",i);
}
