#include<stdio.h>
int main()
{
    int n,i,j,term,sum=0;
    printf(" Enter the No. of term : ");
    scanf("%d",&n);
    for(i=1,j=1;i<=n;i++,j*=10)
    {
        term+=j;
        sum+=term;
    }
    printf(" Sum = %d\n",sum);
}
