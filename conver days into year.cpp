/*Write a C program to convert specified days into years, weeks and days. 
(Note: Ignore leap year.) */
#include<stdio.h>
int main()
{
	int year,days,weeks ;
	printf("enter days :");
	scanf("%d",&days );
	year=days /365;
	weeks= (days%365)/7;
	days = (days%365)%7;
	printf("%d days = %d year %d weeks %d days ", days , year,weeks,days );
	return(0);
}
