#include<stdio.h>
int ProdDigits(int);
int main()
{
    int n;
    printf(" Enter any Number : ");
    scanf("%d", &n);
    printf(" Multiplication of the No. = %d",ProdDigits(n));
    
    return 0;
}
int ProdDigits(int n)
{
	int d,prod=1;
    while(n!=0)
	{
		d=n%10;
		prod*=d;
		n/=10;		
	}
	return prod;
}
