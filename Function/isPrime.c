#include<stdio.h>
int isPrime(int);
int main()
{
	int n;
	printf(" Enter a number = ");
	scanf("%d",&n);
	if(isPrime(n))
		printf(" Prime");
	else
		printf(" Not prime");
		
	return 0;
}

int isPrime (int n)
{
	int p=1;
	if(n<2)
		p=0;
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			p=0;
			break;
		}
	}
	return p;
}
