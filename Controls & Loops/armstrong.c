#include<stdio.h>
int main()
{
	int num,temp;
	printf(" Enter a number =  ");
	scanf("%d",&num);
	temp=num;
	int dig,cube=0;
	while(num!=0)
	{
		dig=num%10;
		cube+=dig*dig*dig;
		num=num/10;
	}
	if(cube==temp)
		printf("\n This number is armstrong");
	else
		printf("\n This number is not armstrong");

	return 0;

}
