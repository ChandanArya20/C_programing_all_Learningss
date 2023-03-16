#include<stdio.h>
int isLeap(int);
int main()
{
	int y;
	printf(" Enter a year = ");
	scanf("%d",&y);
	if(isLeap(y))
		printf(" Leap year");
	else
		printf(" Not Leap year");
		
	return 0;
}

int isLeap(int y)
{
	if((y<1752 && y%4==0) || (y%100!=0 && y%4==0) || y%400==0)
    		return 1;
    	else
    		return 0;
}

