#include<stdio.h>
#include<stdlib.h>
int ncr(int,int);
long long fact(int);
int main()
{
	int m,i,j;
	printf(" Enter no. for lines = ");
	scanf("%d",&m);
	system("cls");
	for(i=0;i<=m;++i)
	{
		for(j=0;j<=(m-i);++j) 
			printf(" "); 
		for(j=0;j<=i;++j)
			printf("%d ",ncr(i,j));
		
	printf("\n");
		
	}
	return 0;
}

int ncr(int n,int r)
{
	return fact(n)/(fact(r)*fact(n-r));
}

long long fact(int n)
{
	long long f;
	if(n<0)
		f=0;
	else
	{
    	for(f=1;n>0;n--)
			f*=n;
		return f;
	}
	return 0;
}
