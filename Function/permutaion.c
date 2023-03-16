#include<stdio.h>
long long fact(int);
int npr(int,int);
int main()
{
	int n,r;
	printf(" Enter two values for n and r = ");
	scanf("%d%d",&n,&r);
	printf(" npr = %d",npr(n,r));
	return 0;
}
int npr(int n,int r)
{
	return fact(n)/fact(n-r);
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
	}
	return f;
}
