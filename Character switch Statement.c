#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	
	printf("\n Enter any Character: ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case'A':
		case'a':
		case'E':
		case'e':
		case'I':
		case'i':
		case'O':
		case'o':
		case'U':
		case'u':
			
	  printf("\n Character=%c is Vowel",ch);
	  break;
	default:
	  printf("\n Character=%c is Consonant",ch);
	  break;
			
	}
}
