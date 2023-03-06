#include<stdio.h>
int main()
{
	int sum,n2000,n500,n200,n100,n50,n20,n10,n5,n2,a;
	printf("Enter amount = ");
	scanf("%d",&a);
	if(a>0)
	{
	n2000=a/2000;
	a=a%2000;
	n500=a/500;
	a=a%500;
	n200=a/200;
	a=a%200;
	n100=a/100;
	a=a%100;
	n50=a/50;
	a=a%50;
	n20=a/20;
	a=a%20;
	n10=a/10;
	a=a%10;
	n5=a/5;
	a=a%5;
	n2=a/2;
	a=a%2;
	sum=n2000+n500+n200+n100+n50+n20+n10+n5+n2+a;
	printf("Total No. of Min. Notes = %d",sum);
	if(n2000>0)
		printf("\nNumber of 2000 notes = %d",n2000);
	if(n500>0)
		printf("\nNumber of 500 notes = %d",n500);
	if(n200>0)
		printf("\nNumber of 200 notes = %d",n200);
	if(n100>0)
		printf("\nNumber of 100 notes = %d",n100);
	if(n50>0)
		printf("\nNumber of 50 notes = %d",n50);
	if(n20>0)
		printf("\nNumber of 20 notes = %d",n20);
	if(n10>0)
		printf("\nNumber of 10 notes = %d",n10);
	if(n5>0)
		printf("\nNumber of 5 notes = %d",n5);
	if(n2>0)
	printf("\nNumber of 2 notes = %d",n2);
	}
	else
		printf("\aInvalid amount");
		
		
		
	
	getchar();
	getchar();
	
	
	
	return 0;
		
}
