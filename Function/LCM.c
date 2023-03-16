#include<stdio.h>
int lcm(int,int);
int main()
{
	int a,b;
	printf(" Enter any two numbers = ");
	scanf("%d%d",&a,&b);
	printf(" LCM = %d",lcm(a,b));
	return 0;
}
	
	
int lcm(int a,int b)
{	
	int x=a; int y=b;
	int rem,result;
	do
	{
		rem=a%b;
		if(rem==0)
			result=b;
		else
		{
			a=b;
			b=rem;
		}
	}
	while(rem!=0);
	
	return (x*y)/b;
}

