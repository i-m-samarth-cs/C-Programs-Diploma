#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str1[10],str2[10],str3[10];
	int length,flag;
	
	printf("\n Enter Any 2 Strings");
	scanf("%s%10s",str1,str2);
	
	printf("\n String-1=%s and String-2=%s",str1,str2);
	//1.Length
	length=strlen(str1);
	printf("\n Length of String-1 is %d",length);
	
	length=strlen(str2);
	printf("\n Length of String-2 is %d",length);
	
	//2.Copy
	printf("\n Before Copying String-1 is %s and String-2 is %s",str1,str2);
	strcpy(str2,str1);
	printf("\n After Copying String-1 is %s and String-2 is %s",str1,str2);
	
	//3.Comparison
	flag=strcmp(str1,str2);
	if(flag==0)
	{
		printf("\n Both String Are Same");
	}
	else
	{
		printf("\n Both String Are not Same");
	}
	
	//4.Concatenation
	printf("\n Before Concat String-1=%s String-2=%s",str1,str2);
	strcat(str2,str1);
	printf("\n After Concat String-1=%s String-2=%s",str1,str2);
	
	//5.Reverse
	printf("\n Before Reversing String-1=%s",str1);
	strrev(str1);
	printf("\n After  Reversing String-1=%s",str1);
	
	//6.Lowercase
	printf("\n Before Converting String-2=%s",str2);
	strlwr(str2);
	printf("\n After Converting String-2=%s",str2);
	
	//7.Uppercase
	printf("\n Before Converting String-2=%s",str2);
	strupr(str2);
	printf("\n After Converting String-2=%s",str2);
	
	
	
}
