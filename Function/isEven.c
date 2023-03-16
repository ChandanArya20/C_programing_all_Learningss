#include<stdio.h>
int isEven(int);
int main()
{
	int n;
	printf(" Enter a number = ");
	scanf("%d",&n);
	if(isEven(n))
		printf(" Even");
	else
		printf(" Odd");
	return 0;
}


int isEven(int n)
{
	if(n%2==0)
		return 1;
	else
		return 0;
}
