#include<stdio.h>
int main()
{
	int n,isPrime=1;
	printf(" Enter a number = "); 
	scanf("%d",&n);
	if(n<2)
		printf(" This number is not prime");
	else {
	for(int i=2;i<n;++i)
	{
		if(n%i==0)
			isPrime=0;
			break;
	}
	if(isPrime==1)
		printf(" This number is prime");
	else
		printf(" This number is not prime");
	}
	return 0;
}
