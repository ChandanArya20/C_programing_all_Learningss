#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf(" Enter a number you want = ");
	scanf("%d",&n);
	system("cls");
	for(int i=1;i<=10;++i)
	{
		for(int j=1;j<=n;++j)
		{
			printf(" %d\t",i*j);
		}
	printf("\n");
	}
}
