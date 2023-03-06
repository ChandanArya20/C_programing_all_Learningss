#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    float term,sum=0;
    printf(" Enter the No. of term : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        term=1.0/pow(i,2);
        sum+=term;
    }
    printf(" \nSum = %f",sum);
    
    return 0;
}