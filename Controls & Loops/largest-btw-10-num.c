#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j,max;
	printf(" Enter any 10 numbers : ");
	scanf("%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
	max=a>b?a:b;
	max=max>c?max:c;
	max=max>d?max:d;
	max=max>e?max:e;
	max=max>f?max:f;
	max=max>g?max:g;
	max=max>h?max:h;
	max=max>i?max:i;
	max=max>j?max:j;
	printf(" Largest No = %d",max);
	return 0;
}
