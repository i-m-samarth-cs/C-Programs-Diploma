#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	
	printf("\n\n Enter any Character");
	scanf("%c",&ch);
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("\n Character=%c is Vowel",ch);
	}
	else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("\n Character=%c is Vowel",ch);
	}
	else
	{
		printf("\n Character=%c is Consonant",ch);
	}
}
