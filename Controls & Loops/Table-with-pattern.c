#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j;
	printf(" Enter a number = ");
	scanf("%d",&n);
	system("cls");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf(" %d*%d=%d\t",i,j,i*j);
		}
	printf("\n");
	}
	
	return 0;
}
