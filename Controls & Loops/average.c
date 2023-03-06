#include<stdio.h>
int main()
{
	int n,i;
	float n1,sum=0,average;
	printf("Of how many numbers you want average = ");
	scanf("%d",&n);
	printf("Enter the %d numbers = ",n);
	for(i=1;i<=n;i++)
	{
		scanf("%f",&n1);
		sum+=n1;
	}
	average=sum/n;
	printf("Average of these numbers = %.2f",average);
	
	return 0;	
}



