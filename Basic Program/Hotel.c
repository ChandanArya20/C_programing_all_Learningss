#include<stdio.h>
#include<string.h>
int main ()
{
	char a[20],b[20],c[5],d[25];
	printf("Well-Come to Hotel Kishan");
	printf("\nHow are You? ");
	scanf("%s",a);
	printf("\nWould you like to take anythings?(yes/no) ");
	scanf("%s",b);
	if(strcmp(b,"yes")==0)
	{
		printf("\nMeterials       price\n");
		printf("\n(1).Cake        200$/kg");
		printf("\n(2). Chiken     250$/kg");
		printf("\n(3). Moton      150$/kg");
		printf("\n(4). Burger     80$/per");
		printf("\n(5). Egg Roll   50$/per");
		printf("\nEnter No. of material whatever you like ");
		scanf("%s",c);
		printf("\nOk,Enetr your address for delivery\n" );
		scanf("%s",d);
		printf("Your selected material will be diliverd within 30 minutes\nThank you");
	}
	else
		printf("\nHave a nice day,thanks");
	return 0;         
	
}
