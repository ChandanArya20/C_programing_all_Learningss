#include<stdio.h>
int isValid(int,int,int);
int isLeap(int);
int main()
{
	int dd,mm,yy;
	printf(" Enter a date(dd/mm/yyyy) - ");
	scanf("%d/%d/%d",&dd,&mm,&yy); 
	if(isValid(dd,mm,yy)!=1)
		printf(" Invalid date");
	else
		printf(" Valid date");
	return 0;
}

int isValid(int dd,int mm,int yy)
{
	int valid=1; 
	if(dd<1 || dd>31 || mm<1 || mm>12 || yy<1 )
		valid=0; 
	else if(mm==4 || mm==6 || mm==9 || mm==11)
	{
		if(mm==9 && yy==1752)
		{
			if(dd>2 && dd<14 || dd>30)	
				valid=0;
		}
		else
		{
			if(dd>30)
				valid=0;
		}
	}
	else 
	if(mm==2)
	{
		if(isLeap(yy))
		{
			if(dd>29)
				valid=0;
		}
		else
		{
			if(dd>28)
				valid=0;
		}
   	}
	if(valid==1)
		return 1;
	else
		return 0;
}

int isLeap(int y)
{
	if((y<1752 && y%4==0) || (y%100!=0 && y%4==0) || y%400==0)
    		return 1;
    	else
    		return 0;
}
