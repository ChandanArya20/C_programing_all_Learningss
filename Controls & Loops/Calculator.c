#include<stdio.h>
#include<math.h>
int main()
{
	float a,b;
	char op;
	printf(" Enter expression =  ");
	scanf("%f%c%f",&a,&op,&b);
	if(op=='+')
	{
		printf(" Addition of these No. = %.2f",a+b);
	}	
	else if(op=='-')
	{
		printf(" Substraction of thses No. = %.2f",a-b);
	}
	else if(op=='*'|| op=='x' || op=='X')
	{
		printf(" Multiplication of these No = %.2f",a*b);
	}
	else if(op=='^')
	{
		printf(" %.0f to the power %.0f =  %.2f",a,b,pow(a,b));
	}
	else if(op=='/')
	{
		
		if(b==0)
		{
			printf("\n Devide by zero error");
		}
		else
		{
			printf(" Division of these No. = %.2f",a/b);
		}
		
	}
	else
	{
		printf(" Invalid exp");
	}
	return 0;
}

