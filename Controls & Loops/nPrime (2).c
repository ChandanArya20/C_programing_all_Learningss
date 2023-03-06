#include<stdio.h>
int isPrime(int);
int main()
{
	int n,i,j;
	printf(" Enter a number = ");
	scanf("%d",&n);
	for(i=1,j=2;i<=n;j++)
	{
		
		if(isPrime(j))
		{
			printf(" %d",j);
			i++;
		}
	}
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
