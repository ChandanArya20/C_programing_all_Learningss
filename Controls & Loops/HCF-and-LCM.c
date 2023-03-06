#include<stdio.h>
int main()
{
	int a,b,rem,result,x,y;
	printf(" Enter any two numbers = ");
	scanf("%d%d",&a,&b);
	x=a,y=b;
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
	printf(" HCF = %d",b);
	printf("\n LCM = %d",(x*y)/b);

	return 0;
}
