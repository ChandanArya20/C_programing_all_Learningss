#include<stdio.h>
int main()
{
	int dd,mm,yy,valid=1; 
	printf("Enter a date (dd/mm/yyYY) - ");
	scanf("%d/%d/%d",&dd,&mm,&yy);
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
		printf(" Valid date");
	else
		printf(" Invalid date");
}
