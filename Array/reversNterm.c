#include<stdio.h>
void reversNarray(int arr[],int n);
#define SIZE 50
int main()
{
    int array[SIZE],length,n;
    printf(" How many elements you want to store = ");
    scanf("%d",&length);
    printf(" Enter %d elements : ",length);
    for(int i=0;i<length;i++)
    {
        scanf("%d",&array[i]);
    }
    printf(" How many first elements you want to revers : = ");
    scanf("%d",&n);
    reversNarray(array,n);
    printf(" After reversing the elements : ");
    for( int i=0;i<length;i++)
    {
        printf("%d  ",array[i]);
    }
}

void reversNarray(int arr[],int n)
{
    int i,j,temp;
    for(i=0,j=n-1;i<j;i++,j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}