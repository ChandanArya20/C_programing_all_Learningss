#include<stdio.h>
int product(int,int);
int remainder(int,int);
int quotient(int,int);
int main()
{
    int n,m;
    printf(" Enter any two Number : ");
    scanf("%d%d", &n,&m);
    printf(" Product = %d",product(n,m));
    printf(" remainder = %d",remainder(n,m));
    printf(" quotient = %d",quotient(n,m));
    return 0;
}

int product(int n,int m)
{
    int i,prod=0;
    for(i=1;i<=m;i++)
    {
        prod+=n;
    }
    return prod;
}

int remainder(int n,int m)
{
    if(m>n)
    while(m<=n)
    {
        n=n-m;
    }
    return n;
}

int quotient(int n,int m)
{
    int count=0;
    while(m<=n)
    {
        n=n-m;
        count++;
    }
    return count;
}