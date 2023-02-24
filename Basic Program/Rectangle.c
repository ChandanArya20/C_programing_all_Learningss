#include<stdio.h>
int main()
{
	float l,b,A,P;
	printf("Enter length and width :");
	scanf("%f%f",&l,&b);
	if(l>=0 && b>=0)
	{
		A=l*b;
		P=2*(l+b);
		printf("Area of Rectangle= %.2f",A);
		printf("\nPerimeter of Rectangle= %.2f",P);
	}
	else
		printf("\aInvalid length or width");
	
	return 0;
	
}
