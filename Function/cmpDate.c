#include<stdio.h>
int cmpDate(int,int,int,int,int,int);
int main()
{
	int dd1,mm1,yy1,dd2,mm2,yy2,i;
	printf(" Enter first date(dd/mm/yyyy) = ");
	scanf("%d/%d/%d",&dd1,&mm1,&yy1);
	printf(" Enter second date(dd/mm/yyyy) = ");
	scanf("%d/%d/%d",&dd2,&mm2,&yy2);
	i=cmpDate(dd1,mm1,yy1,dd2,mm2,yy2);
	if(i==1)
		printf(" Date1 is greater than Date2");
	else if(i==-1)
		printf(" Date2 is greater than Date1");
	else if(i==0)
		printf(" These are same date");
		
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
	
	
	
	
	
	
	
	

