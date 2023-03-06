#include<stdio.h>
int main()
{
	int am,choise;
	printf(" Enter any amount = ");
	scanf("%d",&am);
	printf(" Enter the amount from which you wnat = ");
	scanf("%d",&choise);
	switch(choise)
	{
		case 2000 : printf("   No of 2000's notes = %d",am/2000);
						choise=choise%2000;
						if(choise==0)
							break;
		case 500  : printf("\n  No of 500's notes = %d",am/500);
						choise=choise%500;
						if(choise==0)
							break;
		case 200  : printf("\n  No of 200's notes = %d",am/200);
						choise=choise%200;
						if(choise==0)
							break;
		case 100  : printf("\n  No of 100's notes = %d",am/100);
						choise=choise%200;
						if(choise==0)
							break;
		case 50   : printf("\n   No of 50's notes = %d",am/50);
						choise=choise%50;
						if(choise==0)
							break;
		case 20   : printf("\n   No of 20's notes = %d",am/20);
						choise=choise%20;
						if(choise==0)
							break;
		case 10   : printf("\n   No of 10's notes = %d",am/10);
						choise=choise%10;
						if(choise==0)
							break;
							
		case 5    : printf("\n    No of 5's notes = %d",am/5);
							choise=choise%5;
							if(choise==0)
							break;
		case 2    : printf("\n    No of 2's notes = %d",am/2);
							choise=choise%2;
							if(choise==0)
							break;
		case 1    : printf("\n    No of 1's notes = %d",am);
						break;
		
	default :
		printf(" Invalid amount");
			break;
										
	}
	
	
	return 0;
}
