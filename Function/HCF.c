#include<stdio.h>
int hcf(int,int);
int main()
{
	int a,b;
	printf(" Enter any two numbers = ");
	scanf("%d%d",&a,&b);
	printf(" HCF = %d",hcf(a,b));
	return 0;
}
	
	
int hcf(int a,int b)
{
	int rem;
	do
	{
		rem=a%b;
		if(rem==0)
			return b;
		else
		{
			a=b;
			b=rem;
		}
	}
	while(rem!=0);
}

