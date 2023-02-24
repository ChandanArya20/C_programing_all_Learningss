#include<stdio.h>
int main()
{
	float kmh,ms;
	printf("Enter Speed in kmh = ");
	scanf("%f",&kmh);
	ms=(18*kmh)/5;
	printf("Speed in m/s = %.3f",ms);

	return 0;
}
