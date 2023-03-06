#include<stdio.h>
int isPrime(int); 
int main()
{
	int m,n;
	printf("Enter a value from you want = ");
	scanf("%d",&m);
	printf("Enter a last value  = ");
	scanf("%d",&n);
	while(m!=n)
	{
		if(isPrime(m))
			printf("%d\t",m);
		if(m<n)
			m++;
		else
			m--;					
	}
	if(isPrime(n))
		printf("%d",n);
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
