#include<stdio.h>
int main()
{
	printf(" Enter a number = ");
	int n,i;
	scanf("%d",&n);
	int add=0;
	if(n>0)
	{
		i=1;
		while(i!=n)
		{	
			add+=i;
			++i;
		}
	}
	else if(n<0)
	{
		i=-1;
		while(i!=n)
		{
		add+=i;	
		--i;
		}
	}
	else
	{
		i=0;
		add=0;
	}
		
	add=add+i;
	printf(" Addition of positive integer till %d = %d",n,add);
	
	
	return 0;
}
