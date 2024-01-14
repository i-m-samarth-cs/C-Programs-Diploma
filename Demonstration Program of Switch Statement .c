#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	
	printf("\n Enter Any number Between 1 to 5");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1:printf("\n ONE");
		      break;
		case 2:printf("\n TWO");
			  break;
		case 3:printf("\n THREE");
			  break;
		case 4:printf("\n FOUR");
			  break;
		case 5:printf("\n FIVE");
			  break;
		
		default:printf("\n Wrong Choice Choose Between 1 to 5");
		      break;
	}
}
