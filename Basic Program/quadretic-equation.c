#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,D,x,y;
	printf("Enter co-efficients a,b and c = ");
	scanf("%f%f%f",&a,&b,&c);
	D=b*b-4*a*c;
	if(D>0)
	{
		x= (-b+sqrt(D))/(2*a);
	    y= (-b-sqrt(D))/(2*a);
	    printf("Roots of Quadretic equation are %.2f and %.2f",x,y);
	}
	else if(D==0)
	{
		x= (-b+sqrt(D))/(2*a);
		printf("Root of Quadretic equation is %.2f",x);
	}
	else
	{
		printf("Roots are imaginary");	
	}
	
	
	
	return 0;
}
