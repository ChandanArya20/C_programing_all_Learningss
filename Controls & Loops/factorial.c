#include<stdio.h>
int main()
{
	int n,i;
	long long f;
	printf(" Enter a number = \n");
	printf("%u\n",sizeof(long long int));
	scanf("%d",&n);
	if(n<0)
		printf("Please enter non-negative integer");
	else
	{	
    	for(f=1; n>0; n--)
			f*=n;
		printf(" Factorial = %lld",f);	
	
		return 0;
	}
}
