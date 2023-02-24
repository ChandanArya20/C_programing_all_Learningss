#include<stdio.h>
#include<math.h>
int main ()
{
	//simple interest and compound interest
	float p,r,t,si,ci;
	printf("Enter Principle,Rate and Time: ");
	scanf("%f%f%f",&p,&r,&t);
	si=(p*r*t)/100;
	ci=p*(pow((1+r/100),t)-1);
	printf("\nS.I. = %.3f",si);
	printf("\nC.I. = %.3f",ci);
	
	return 0;
}
















