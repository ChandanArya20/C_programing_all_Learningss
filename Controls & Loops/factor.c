#include<stdio.h>
int main()
{
	int n;
	printf(" Enter a number = ");
	scanf("%d",&n);
	for(int i=2;n!=1;i++ )
	{
		if(n%i==0)
		{
			printf(" %d\t",i);
			n=n/i; 
			i--;
		}
	}
	
	return 0;	
}
