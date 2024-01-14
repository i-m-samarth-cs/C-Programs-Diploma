#include<stdio.h>
#include<conio.h>

void main()
{
	char str[100];
	
	printf("\n Enter Any Paragraph(Press to (;)stop):\n\n ");
	scanf("%100[^;]s",str);
	
	printf("\n The Entered Paragraph\n\n%s",str);
}
