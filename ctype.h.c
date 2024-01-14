#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	
	printf("\n Enter Any Character");
	scanf("%c",&ch);
	
	printf("\n Given Character is %c",ch);
	
	//Alphabet
	if( isalpha (ch) )
	{
		printf("\n Given Character is Alphabet");
	}
	else
	{
		printf("\n Given Character is not  Alphabet");
	}
	//Digits
	if( isdigit (ch) )
	{
		printf("\n Given Character is Digit");
	}
	else
	{
		printf("\n Given Character is not Digit");
	}
	//Lowercase
	if( islower (ch) )
	{
		printf("\n Given Character is in Lowercase");
	}
	else
	{
		printf("\n Given Character is not in Lowercase");
	}
	//Uppercase
	if( isupper (ch) )
	{
		printf("\n Given Character is in  Uppercase");
	}
	else
	{
		printf("\n Given Character is not in  Uppercase");
	}
}
