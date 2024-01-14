#include<stdio.h>
#include<conio.h>

int main()
{
	struct account
	{
		char name[10];
		long int accno;
		float balance;
	} b;
	
	printf("\n Enter Your Name of Account Holder,account number and Balance of Account");
	scanf("%s%ld%f",b.name, &b.accno, &b.balance);
	
	printf("\n Name of Account Holder =%s\n Account Number=%d\n Balance=%f" , b.name, b.accno, b.balance);
}
