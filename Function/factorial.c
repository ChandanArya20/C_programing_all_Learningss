#include<stdio.h>
long long fact(int);
int main()
{
	int n;
	printf(" Enter a number = ");
	scanf("%d",&n);
	printf(" factorial of this number = %lld",fact(n));
} 


long long fact(int n)
{
	if(n<0)
		printf(" Please inter non-negative integer\n");
	else
	{
		long long f;
    	for(f=1;n>0;n--)
			f*=n;
		return f;
	}
	return 0;
}
