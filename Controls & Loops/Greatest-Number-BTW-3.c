#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	float a,b,c;
	printf("Enter any three Numbers - ");
	scanf("%f%f%f",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("Greatest No. is %f",a);
		}
		else
		{
			printf("Greatest No. is %f",c);
		}
    }
	else	
	{
		if(b>c)
		{
			printf("Greatest No. is %f",b);
		}
		else
		{
			printf("Greatest No. is %f",c);
		}
		printf("\n");
		getch();
		
	}
		
	return 0;
}
