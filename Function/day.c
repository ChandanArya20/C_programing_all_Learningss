#include<stdio.h>
int isValid(int,int,int);
void day(int,int,int);
int main()
{
	int dd,mm,yy;
	printf(" Enter a date(dd/mm/yyyy) - ");
	scanf("%d/%d/%d",&dd,&mm,&yy);
	day(dd,mm,yy);
	return 0;
}


void day(int dd,int mm,int yy)
{
	int	weekday,i=0,k=0;
	if(isValid(dd,mm,yy)!=1)
	{
		printf(" Invalid date");
	}
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
		for(int j=1800;j<=yy;j=j+100)
		{
			if(j%100==0)
			{
				if(j%400!=0)
					k++;
			}
		}	
		
		if(yy<1752)
		{
			weekday=((yy-1)+((yy-1)/4)+dd+i)%7;
		}
		else
			weekday=((yy-1)+((yy-1)/4)+dd+i-11-k)%7;
	
		switch(weekday)
		{
			case 1 : printf(" The Day is, on this date - Saturday"); break;
			case 2 : printf(" The Day is, on this date - Sunday"); break;
			case 3 : printf(" The Day is, on this date - Monday"); break;
			case 4 : printf(" The Day is, on this date - Tuesday"); break;
			case 5 : printf(" The Day is, on this date - Wednesday"); break;
			case 6 : printf(" The Day is, on this date - Thursday"); break;
			case 0 : printf(" The Day is, on this date - Friday"); break;
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
		if(mm=9)
		{
			if(yy==1752)
			{
				if(dd>2 && dd<14)	
					valid=0;
			}
	    	else 
				if(dd>30)
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
























