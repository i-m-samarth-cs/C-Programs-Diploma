#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,choice,ans;
	
	printf("\n\n\n*****Menu*****");
	printf("\n 1.Addition");
	printf("\n 2.Subtraction");
	printf("\n 3.Multiplication");
	printf("\n 4.Division");
	
	printf("\n  Enter your Choice (1/2/3/4)");
	scanf("%d",&choice);
	
	printf("\n Enter any Two Numbers");
	scanf("%d%d",&a,&b);
	
	switch(choice)
	{
		case 1:ans=a+b;
			   printf("\n Addition=%d",ans);
			   break;
		case 2:ans=a-b;
			   printf("\n Subtraction=%d",ans);
			   break;
		case 3:ans=a*b;
			   printf("\n Multiplication=%d",ans);
			   break;
		case 4:ans=a/b;
			   printf("\n Division=%d",ans);
			   break;
		default:printf("\n Wrong Choice Choose Between 1 to 4");
			   
	}
}
