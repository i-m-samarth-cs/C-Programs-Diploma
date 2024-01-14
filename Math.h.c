#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int num1=-1234;
	long int num2=-123456789L;
	long int result;
	
	double value=995.90;
	double up,down,ans;
	
	int degree_angle=60;
	double radian_angle=60*(3.14/180);
	
	//1.sqrt
	ans=sqrt(16.00);
	printf("\n Squareroot of 16 is %lf",ans);
	//2.ceil
	ans=ceil(value);
	printf("\n Number Rounded UP is %lf",ans);
	//3.floor
	ans=floor(value);
	printf("\n Number Rounded Down is %lf",ans);
	//4.abs
	ans=abs(num1);
	printf("\n Absolute Value is %lf",ans);
	//5.labs
	ans=labs(num2);
	printf("\n Long Absolute Value is %lf",ans);
	//6.log()
	ans=log(10);
	printf("\n Natural Logaritm of 10 is %lf",ans);
	//7.log10(10)
	ans=log10(10);
	printf("\n Common Logaritm of 10 is %lf",ans);
	//8.pow()
	ans=pow(2,4);
	printf("\n 2 Raise to 4 is %lf",ans);
	//9.cos()
	ans=cos(radian_angle);
	printf("\n Cos of 60 is %lf",ans);
	//10.sin()
	ans=sin(radian_angle);
	printf("\n Sin of 60 is %lf",ans);
	//11.tan()
	ans=tan(radian_angle);
	printf("\n Tan of 60 is %lf",ans);
	
	
	
}
