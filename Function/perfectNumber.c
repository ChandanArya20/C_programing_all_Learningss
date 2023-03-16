#include<stdio.h>
int sumPdivisors(int);
int main()
{
    int n,m,i;
    printf(" Enter the Range : ");
    scanf("%d%*c%d", &n,&m);
    for (i = n; i <= m; i++)
    {
        if(sumPdivisors(i)==i)
        {
            printf(" %d\t",i);
        }
    }
    return 0;
}
int sumPdivisors(int n)
{
    int i,sum=0;
    for(i = 1; i < n; i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    return sum;
}