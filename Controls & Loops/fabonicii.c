#include<stdio.h>
int main()
{
	int a=0,b=1,c=0,n;
	printf(" Enter a number = ");
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
		
		printf("%d\t",c);
		a=b;
		b=c;
		c=a+b;
		++i;
	}
	
	
	
	return 0;
}
