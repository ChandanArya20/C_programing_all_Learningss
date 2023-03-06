#include<stdio.h>
int main()
{
	int n,d,sum;
	printf(" Enter a number = ");
	scanf("%d",&n);
	printf(" %d : ",n);
	do
	{
		sum=0;
		while(n!=0)
		{
			d=n%10;
			sum+=d;
			n/=10;
		}
		printf("%d\t",sum);
		n=sum;
		
	}while(n/10!=0);
		
	return 0;
}
