#include<stdio.h>
int main()
{
    int n,base,rem,zero=0,flag=1,rev=0;
    printf(" Enter a number in Decimal = "); 
    scanf("%d",&n);
    printf(" Enter base in which you want trans.. = ");
    scanf("%d",&base);
    printf(" Representation in required number system = ");
    while(n!=0)
    {
        rem=n%base;
        if(flag==1 && rem==0)
            zero++;
        else
            flag=0;
        rev=rev*10+rem;
        n=n/base;
    }
    while(rev>0)
    {
        printf("%d",rev%10);
        rev=rev/10;
    }
    while(zero>0)
    {
        printf("0");
        --zero;
    }
    return 0;
}