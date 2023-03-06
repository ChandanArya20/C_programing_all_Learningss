#include<stdio.h>
int main()
{
	printf(" enter a value = ");
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		if(i%10==0)
			continue;
		printf("%d\t",i);
	}
	
	
	return 0;
}
