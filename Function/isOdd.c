#include<stdio.h>
int isOdd(int);
int main()
{
	int n;
	printf(" Enter a number = ");
	scanf("%d",&n);
	if(isOdd(n))
		printf(" Odd");
	else
		printf(" Even");
	return 0;
}


int isOdd(int n)
{
	if(n%2==0)
		return 0;
	else
		return 1;
}
