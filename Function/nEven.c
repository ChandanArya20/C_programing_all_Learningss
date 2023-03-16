#include<stdio.h>
int isEven(int);
void nEven(int);
int main()
{
	int n;
	printf(" Enter a number = ");
	scanf("%d",&n);
	nEven(n);
	
	return 0;
}	
void nEven(int n)
{
	int i,j;
	for(i=1,j=0;i<=n;j++)
	{
		
		if(isEven(j))
		{
			printf(" %d",j);
			i++;
		}
	}
}
int isEven(int n)
{
	if(n%2==0)
		return 1;
	else
		return 0;
}
