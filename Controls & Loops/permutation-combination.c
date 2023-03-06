#include<stdio.h>
long long fact(int);
int main()
{
	int n,r;
	printf("Enter the value of n and r = ");
	scanf("%d%d",&n,&r);
	if(n<0 || r<0 || n<r)
		printf(" Invalid input");
	else
	{
	printf(" The number of permutation = %lld",fact(n)/fact(n-r));
	printf("\n The number of combination = %lld",fact(n)/(fact(r)*fact(n-r)));
	}
	
	return 0;	
}


long long fact(int n)
{
	long long f;
	if(n<0)
		f=0;
	else
	{
    	for(f=1;n>0;n--)
			f*=n;
		return f;
	}
	return 0;
}
