#include<stdio.h>
#include<stdlib.h>
int isValid(int,int,int);
int isLeap(int);
int main()
{
	int sub1,sub2,sub3,sub4,sub5,fm1,fm2,fm3,fm4,fm5,s;
	float p1,p2,p3,p4,p5,p; 
	char N[30],F[30],M[30],RC[10],RN[10],DB[20],RegN[20],FC[10],CN[50];
	printf("                 Name - ");
	scanf("%[^\n]s",N);
	fflush(stdin);
	printf("\n      Father's Name - ");
	scanf("%[^\n]s", F); 
	fflush(stdin);
	printf("\n      Mother's Name - ");
	scanf("%[^\n]s",M);
	fflush(stdin);
	printf("\n      Date of Birth - ");
	scanf("%[^\n]s",DB);
	fflush(stdin);
	printf("\n    Name of College - ");
	scanf("%[^\n]s",CN);
	fflush(stdin);
	printf("\n          Roll Code - ");
	scanf("%[^\n]s",RC);
	fflush(stdin);
	printf("\n        Roll number - ");
	scanf("%[^\n]s",RN);
	fflush(stdin);
	printf("\nRegistration Number - ");
	scanf("%[^\n]s",RegN);
	fflush(stdin);
	printf("\n             Faculty- ");
	scanf("%[^\n]s",FC);
	fflush(stdin);
		
	printf("Enter obtained marks of sub1,sub2,sub3,sub4,sub5 = ");
	scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
	printf("Enter full marks of sub1,sub2,sub3,sub4,sub5 = "); 
	scanf("%d%d%d%d%d",&fm1,&fm2,&fm3,&fm4,&fm5); 
	system("cls");
	if(sub1>fm1 || sub2>fm2 || sub3>fm3 || sub4>fm4 || sub5>fm5)
		printf("\aObtained marks is greater than full marks error..");
	else
	{       
		p1=(float)sub1/fm1*100;
		p2=(float)sub2/fm2*100;
		p3=(float)sub3/fm3*100;
		p4=(float)sub4/fm4*100;
		p5=(float)sub5/fm5*100;
		p=(float)(sub1+sub2+sub3+sub4+sub5)/(fm1+fm2+fm3+fm4+fm5)*100;
		printf("\n               Name - %s",N);
		printf("\n      Father's Name - %s",F);
		printf("\n      Mother's Name - %s",M);
		printf("\n    Name of College - %s",CN);
		printf("\n          Roll Code - %s",RC);
		printf("\t        Roll number - %s",RN);
		printf("\nRegistration Number - %s",RegN);
		printf("\t      Date of Birth - %s",DB);
		printf("\n             Faculty- %s",&FC);
		printf("\n "); 
		printf("\n Subject  F.M.  Obt Marks  %%-Marks ReMarks   ");
		printf("\n SUB1     %d    %d          %.1f",fm1,sub1,p1);
		if(sub1>=75)
		   printf("  D");
		printf("\n SUB2     %d    %d          %.1f",fm2,sub2,p2);
		if(p2>=75)
		   printf("  D");
	    printf("\n SUB3     %d    %d          %.1f",fm3,sub3,p3);
		if(p3>=75)
		   printf("  D");
	    printf("\n SUB4     %d    %d          %.1f",fm4,sub4,p4);
		if(p4>=75)
		   printf("  D");
	    printf("\n SUB5     %d    %d          %.1f",fm5,sub5,p5);
		if(p5>=75)
		   printf("  D");
	    printf("\n ");
	    s=sub1+sub2+sub3+sub4+sub5;
		printf("\n Total = %d (%.1f%%)",s,p);     
		if(p1<30 || p2<30 || p3<30 || p4<30 || p5<30)
	    	printf("\n Final Result - Fail");
		else
		{
	    	if(p>=60)
				printf("\n Final Result - 1st division");	
		    else if(p>=45)
				printf("\n Final Result - 2nd division");
		    else if(p>=30)
				printf("\n Final Result - 3rd division");		
		    else	
				printf("\n Final Result - Fail");	
		}  
		
		if(p>=90)
			printf("\n Grade - A+");
		else if(p>=80 && p<90)
			printf("\n Grade - A");
		else if(p>=70 && p<80)
			printf("\n Grade - B+");
		else if(p>=60 && p<70)
			printf("\n Grade - B");
		else if(p>=45 && p<60)
			printf("\n Grade - C");
		else
			printf("\n Grade - D");
	}
		return 0;
}

/*int isValid(int dd,int mm,int yy)
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
}*/









