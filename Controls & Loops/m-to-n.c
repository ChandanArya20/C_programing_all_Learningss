#include<stdio.h>
int main()
{
	int n,m;
	printf("Enter first number = ");
	scanf("%d",&m);
	printf("Enter second value = ");
	scanf("%d",&n);
	printf("%d",m);
	while(m!=n)
	{
		if(m<n)
			++m;
		else
		{
			if(m>n)
				--m;
		}
	printf("\t%d",m);	
	}
		
		

	return 0;
}
