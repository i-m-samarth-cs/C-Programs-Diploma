#include<stdio.h>
#include<conio.h>

int main()
{
	struct student
	{
		char name[10];
		int rollno;
		float percentage;
	} stud[5];
	int i;
	
    printf("\n Accepting Details of 5 Students: ");
    for(i=0;i<5;i++)
    {
    	printf("\n Enter Your Name,Roll no and Percentage");
	    scanf("%s%d%f",stud[i].name,&stud[i].rollno,&stud[i].percentage);
	}
	printf("\n Displaying Details of 5 Students");
	for(i=0;i<5;i++)
    {
    	printf("\nName=%s\n Roll no=%d\n Percentage=%f ",stud[i].name,stud[i].rollno,stud[i].percentage);
	}
    
	
}
