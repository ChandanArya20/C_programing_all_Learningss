#include<stdio.h>
int isValid(int,int,int);
int main()
{
	int dd,mm,yy,i=0,Total;
	printf(" Enter a valid date(dd/mm/yyyy) - ");
	scanf("%d/%d/%d",&dd,&mm,&yy);
	if(isValid(dd,mm,yy)!=1)
		printf(" Invalid date");
	else
	{
		switch(mm)
		{
			case 12 : i+=30;
			case 11 : i+=31;
			case 10 : i+=30;
			case  9 : i+=31;
			case  8 : i+=31;             
			case  7 : i+=30;
			case  6 : i+=31;
			case  5 : i+=30;
			case  4 : i+=31;
			case  3 : i+=28;
			case  2 : i+=31;
			case  1 : i+=0;
		}
		if(mm>2)
		{
			if( (yy<1752 && yy%4==0) || (yy%100!=0 && yy%4==0) || yy%400==0)
			i++;
		}
		Total=dd+i;
		printf(" Day No. of this date of this year - %dth",Total);
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
