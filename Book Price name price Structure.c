#include<stdio.h>
#include<conio.h>

int main()
{
	struct book
	{
		char name[10];
		int pages;
		float price;
	} b;
	
	printf("\n Enter Your Name of Book,Pages and Price of Book");
	scanf("%s%d%f",b.name, &b.pages, &b.price);
	
	printf("\n Name of Book =%s\n Pages of Book=%d\n Price=%f" , b.name, b.pages, b.price);
}
