#include<stdio.h>
int sumPdivisors(int);
int main()
{
    int n;
    printf("Enter any Number : ");
    scanf("%d", &n);
    printf("Sum of proper divisor of the No. = %d",sumPdivisors(n));
    
    return 0;
}
int sumPdivisors(int n)
{
    int i,sum=0;
    for(i = 1; i < n; i++)
    {
        if(n%i==0)
        {
            printf(" %d\t",i);
            sum+=i;
        }
    }
    return sum;
}