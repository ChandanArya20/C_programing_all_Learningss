#include<stdio.h>
int main ()
{
	int n,m;
	printf(" Entyer first number = ");
	scanf("%d",&n);
	printf(" Entyer second number = ");
	scanf("%d",&m);
	int i,j;
	for(i=n+1;i<m;++i)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
		}
	}
	
	
	
	
	return 0;
}
