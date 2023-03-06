#include<stdio.h>
int isValid(int,int,int);
int cmpDate(int,int,int,int,int,int);
int isLeap(int);

int main()
{
	int dd1,dd2,mm1,mm2,yy1,yy2,dd,mm,yy;
	printf(" Enter first date(dd/mm/yyyy) - ");
	scanf("%d/%d/%d",&dd1,&mm1,&yy1);
	if(isValid(dd1,mm1,yy1)!=1)
		printf(" Invalid date");
	else
	{
		printf(" Enter second date(dd/mm/yyyy) = ");
		scanf("%d/%d/%d",&dd2,&mm2,&yy2);
		if(isValid(dd2,mm2,yy2)!=1)
			printf(" Invalid date");
		else
		{
			if(dd1<dd2)
			{
				if(mm1==3)
				{
					if(isLeap(yy1))
						dd1=dd1+29;
					else
						dd1=dd1+28;
			    	}
				else if(mm1==5 || mm1==7 || mm1==10 || mm1==12) 
					dd1=dd1+30;
				else 
					dd1=dd1+31;
		    	}
		    	mm1=mm1-1;
			if(mm1<mm2)
			{
				mm1=mm1+12;
				yy1=yy1-1;
			}
			dd=dd1-dd2;
			mm=mm1-mm2;
			yy=yy1-yy2;
			printf("\n Difference of these two dates(D1-D2):-");
			printf(" %d year(s) %d month(s) %d days",yy,mm,dd);
		}
	}
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

int cmpDate(int dd1,int mm1,int yy1,int dd2,int mm2,int yy2)
{
	if(yy1>yy2 || yy1==yy2 && mm1>mm2  || yy1==yy2 && mm1==mm2 && dd1>dd2)
		return 1;
	else if(yy1==yy2 && mm1==mm2 && dd1==dd2)
		return 0;
	else
		return -1;
			
}

int isLeap(int y)
{
	if((y<1752 && y%4==0) || (y%100!=0 && y%4==0) || y%400==0)
    		return 1;
    	else
    		return 0;
}
