#include<stdio.h>
int isValid(int,int,int);
int main()
{
	int dd1,mm1,yy1,dd2,mm2,yy2,flag;
	printf(" Enter first date(dd/mm/yyyy) = ");
	scanf("%d/%d/%d",&dd1,&mm1,&yy1);
	if(isValid(dd1,mm1,yy1)!=1)
		printf(" Invalid date");
	else if(isValid(dd2,mm2,yy2)!=1)
			printf(" Invalid date");
	else
	{
		printf(" Enter second date(dd/mm/yyyy) = ");
		scanf("%d/%d/%d",&dd2,&mm2,&yy2);
		else
		{
			if(yy1>yy2 || yy1==yy2 && mm1>mm2  || yy1==yy2 && mm1==mm2 && dd1>dd2)
				flag=1;
			else if(yy1==yy2 && mm1==mm2 && dd1==dd2)
				flag=0;
			else
				flag=-1;
					
			if(flag==1)
				printf(" Date1 is greater than Date2");
			if(flag==-1)
				printf(" Date2 is greater than Date1");
			if(flag==0)
				printf(" These are same date");
				
			return 0;
		}
	}
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
			if(dd>30)
				valid=0;
	}
	else 
	if(mm==2)
	{
		if( (yy<1752 && yy%4==0) || (yy%100!=0 && yy%4==0) || yy%400==0)
		{
			if(dd>29)
				valid=0;
		}
		else
			if(dd>28)
				valid=0;
   	}
	if(valid==1)
		return 1;
	else
		return 0;
}

