#include<stdio.h>
#include<conio.h>

int main()
{
	struct student
	{
		char name[10];
		int rollno;
		float percentage;
	} stud;
	
	printf("\n Enter Your Name,Roll no and Percentage");
	scanf("%s%d%f",stud.name, &stud.rollno, &stud.percentage);
	
	printf("\n Name=%s\n Roll No=%d\n Percentage=%f" , stud.name, stud.rollno, stud.percentage);
}
