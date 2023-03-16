#include<stdio.h>
int isOdd(int);
void nOdd(int);
int main()
{
	int n;
	printf(" Enter a number = ");
	scanf("%d",&n);
	nOdd(n);
	
	return 0;
}
	
void nOdd(int n)
{
	int i,j;
	for(i=1,j=0;i<=n;j++)
	{
		
		if(isOdd(j))
		{
			printf(" %d",j);
			i++;
		}
	}
}

int isOdd(int n)
{
	if(n%2==0)
		return 0;
	else
		return 1;
}
