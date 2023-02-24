#include<stdio.h>
#define PI 3.14
int main()
{
	float r,A,P;
	printf("Enter the radius = ");
	scanf("%f",&r);
	if(r>=0)
	{
		A=PI*r*r;
		P=2*PI*r;
		printf("         Area of Circle = %.2f squre unit\n",A);
		printf("Circumference of Circle = %.2f unit",P);
	}
	else
		printf("\aInvalid radius");
	return 0;
		
}
