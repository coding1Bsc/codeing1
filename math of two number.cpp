/*WAP in C to accept two integer numbers with proper message. Perform different 
operations using the following operators : + , - , *, / , % */
#include<stdio.h>
int main()
{
	float num1, num2, sum ,dif,multi,div ;
	
	printf(" enter your 1st number :");
	scanf("%f",&num1);
	printf(" enter your 2nd number :");
	scanf("%f",&num2);
	sum= num1+num2;
	dif=num1-num2;
	multi=num1*num2;
	div=num1/num2;
	printf("the sum of two number is = %f\nThe difference of two number is = %f\nThe multiplication of two number is = %f\nThe division of two number is = %f",sum,dif,multi,div);
return(0);	
}
