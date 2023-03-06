#include<stdio.h>
int main()
{
	int y,i=0;
	printf(" Enter any year - ");
	scanf("%d",&y);
	if(y<=0)
		printf("Invalid year");
	else
	{	
		if(y<1752 && y%4==0)
			i=1;
		else if(y%100!=0 && y%4==0)
			i=1;
	    	else
			if(y%400==0)
	   			i=1;
	}
	if(i==1)
		printf(" Leap year");
	else
		printf(" Not Leap year");
		
	return 0;
}

    /*if((y<1752 && y%4==0) || (y%100!=0 && y%4==0) || y%400==0)
    	printf(" Leap year");
    else
    	printf(" Not Leap year");
    
	
	return 0;
}*/
