#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,S,A;
	printf("Enter three sides of size of triangle = ");
	scanf("%f%f%f",&a,&b,&c);
	if(a+b<=c || a+c<=b || b+c<=a)
		printf("Invalid size of Triangle");
	else
	{	
		S=(a+b+c)/2;
		A=sqrt(S*(S-a)*(S-b)*(S-c));
		printf("Area of Triangle = %.2f Squre unit",A);
    }
	
	return 0;
}
