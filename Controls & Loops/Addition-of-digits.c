#include<stdio.h>
int main()
{
	printf(" Enter a number = ");
	int n,r;
	scanf("%d",&n);
	int n1=n;
	int add=0,d;
	while(n!=0)
	{
		d=n%10;
		add+=d;
		n=n/10;
	}
	printf(" Addition of Digit of %d = %d ",n1,add);
	
	
	
	
	
	
return 0;
}
