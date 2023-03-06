#include<stdio.h>
#include<math.h>
int main()
{
    int x,n,i,sign,term,sum=0;
    printf(" Enter the value of x : ");
    scanf("%d",&x);
    printf(" Enter the No. of terms : ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
       sign= (i%2==0)?-1:1;
       term=sign*pow(x,i);
       sum+=term;
    }
    printf(" Sum of the series = %d",sum);

    return 0;

}