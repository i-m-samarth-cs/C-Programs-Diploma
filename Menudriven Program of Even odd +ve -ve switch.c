#include<stdio.h>
#include<conio.h>

void main()
{
	int num,choice;
	
	printf("\n\n *****MENU*****");
	printf("\n 1. To Find Whether the Entered Number is Positive or Negative");
	printf("\n 2. To Find Whether the Entered Number Is Even or Odd");
	
	printf("\n Enter Choice(1/2)");
	scanf("%d",&choice);
	
	printf("\n Enter any Number");
	scanf("%d",&num);
	
	switch(choice)
	{
		case 1:if(num>0)
			   {
			   	printf("\n Number is Positive");
			   }
			   else if(num<0)
			   {
			   	 printf("\n Number is Negative");
			   }
			   else
			   {
			   	printf("\n Number is Zero");
			   }
			   break;
		case 2:if(num%2==0)
			   {
			   	printf("\n Number is Even");
			   }
			   else if(num%2!=0)
			   {
			   	printf("\n Number is Odd");
			   }
			   else
			   {
			   	printf("\n Number is Zero");
			   }
	           break;
		
		default:printf("\n Wrong Choice Choose Between 1 and 2");
		}
	}
