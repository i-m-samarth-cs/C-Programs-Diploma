#include<stdio.h>
#include<conio.h>

int main()
{
	struct employee
	{
		char name[10];
		int id;
		float salary;
	} emp[3];
	int i;
	
    printf("\n Accepting Details of 3 Employees: ");
    for(i=0;i<3;i++)
    {
    	printf("\n Enter Your Name,ID and Salary");
	    scanf("%s%d%f", emp[i].name, &emp[i].id, &emp[i].salary);
	}
	printf("\n Displaying Details of 3 Employees");
	for(i=0;i<3;i++)
    {
    	printf("\nName of Employee=%s\n Id=%d\n Salary=%f ",emp[i].name,emp[i].id,emp[i].salary);
	}
    
	
}
