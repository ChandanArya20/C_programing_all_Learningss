#include<stdio.h>
int isLeap(int);
int main()
{
	int yy;
	printf(" Enter any year = ");
	scanf("%d",&yy);
	if(isLeap(yy))
		printf(" Leap year");
	else
		printf(" Not Leap year");
		
	return 0;
}

int isLeap(int yy)
{
	if( yy<1752 && yy%4==0 || yy%100!=0 && yy%4==0 || yy%400==0)
		return 1;
	else
		return 0;
}
