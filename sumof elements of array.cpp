#include<stdio.h>
#include<conio.h>

int main()
{
	
  int a[5],i,sum=0;
  
  printf("\n Enter any 5 Elements of Array: ");
  
  for(i=0;i<5;i++)
  {
  	printf("\n Enter any number: ");
  	scanf("%d",&a[i]);
  }
  printf("\n Displaying Numbers");
  for(i=0;i<5;i++)
  {
  	printf(" %d ",a[i]);
  }
  for(i=0;i<5;i++)
  {
  	sum=sum+a[i];
  }
  printf("\n Sum=%d",sum);
}
