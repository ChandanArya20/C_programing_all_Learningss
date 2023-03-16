#include<stdio.h>
void digit(int);
int main()
{
	int n,d,flag=1,zero=0,rev=0;
	printf(" Enter a number = ");
	scanf("%d",&n);
	if(n<0)
	{
		printf(" minus");
		n=-n;
	}
	while(n>0)
	{
		d=n%10;
		if(d==0 && flag==1)
			zero++;
		else
			flag=0;
		rev=rev*10+d;
		n=n/10;
	}
	//printf("Rev = %d",rev);
	while(rev>0)
	{
		d=rev%10;
		digit(d);
		rev=rev/10;
	}
	while(zero>0)
	{
		printf(" Zero");
		zero--;
	}	
	return 0;
}

void digit(int n)
{
	switch(n)
	{
		case 0 : printf(" Zero"); break;
		case 1 : printf(" One"); break;
		case 2 : printf(" Two"); break;
		case 3 : printf(" Three"); break;
		case 4 : printf(" Four"); break;
		case 5 : printf(" Five"); break;
		case 6 : printf(" Six"); break;
		case 7 : printf(" Seven"); break;
		case 8 : printf(" Eight"); break;
		case 9 : printf(" Nine"); break;
	    default :
		printf(" Invalid digit");
	}
}
