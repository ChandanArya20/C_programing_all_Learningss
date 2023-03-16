#include<stdio.h>
int isPrime(int);
void nPrime(int);
int main()
{
	int n;
	printf(" Enter a number = ");
	scanf("%d",&n);
	nPrime(n);
	
	return 0;
}	
void nPrime(int n)
{
	int i,j;
	for(i=1,j=2;i<=n;j++)
	{
		
		if(isPrime(j))
		{
			printf(" %d",j);
			i++;
		}
	}
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
