#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number = ");
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
		printf("\t %d",i);
		++i;
	}

	return 0;
}
