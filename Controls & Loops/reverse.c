#include<stdio.h>
int main()
{
	int n,r,rev;
	printf(" Enter a number = ");
	scanf("%d",&n);
	int x=n;
	for(rev=0;n>0;n=n/10)
	{
		r=n%10;
		rev=rev*10+r;
	}
	printf(" Reverse of this No. = %d",rev);
	
	if(x==rev)
		printf("\n This NO. is pelindrum");
	return 0;
}
