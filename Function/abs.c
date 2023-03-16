#include<stdio.h>
int abs(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    n= abs(n);
    printf("Absolute value: %d",n);
    return 0;
}
int abs(int n)
{
    n=(~n)+1;
    return n;
}