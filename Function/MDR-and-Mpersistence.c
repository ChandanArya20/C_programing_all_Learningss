#include<stdio.h>
int MDR(int);
int Mpersistence(int);
int ProdDigits(int);
int main()
{
    int n;
    printf(" Enter a number : ");
    scanf("%d",&n);
    printf(" MDR = %d\n Mpersistence = %d",MDR(n),Mpersistence(n));
}
int MDR(int n)
{
    int prod;
     while (n/10!=0)
    {
        n=ProdDigits(n);
    }
    return n;  
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

int Mpersistence(int n)
{
    int prod,count=0;
     while (n/10!=0)
    {
        count++;
        n=ProdDigits(n);
    }
    return count;
}
