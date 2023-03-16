#include<stdio.h>
int reverse(int);
int main()
{
	int n;
	printf(" Enter a number = ");
	scanf("%d",&n);
	printf(" Reverse of this number = %d",reverse(n));
}
int reverse(int n)
{
	int d,rev=0;
	while(n>0)
	{
		d=n%10;
		rev=rev*10+d;
		n=n/10;
	}
	return rev;
}
