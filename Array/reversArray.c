#include<stdio.h>
void reversArray(int arr[],int length);
#define SIZE 10
int main()
{
    int array[SIZE],length; 
    printf(" How many elements you want to store = ");
    scanf("%d",&length);
    printf(" Enter %d elements : ",length);
    for(int i=0;i<length;i++)
    {
        scanf("%d",&array[i]);
    }
    reversArray(array,length);
    printf(" After reversing the elements : ");
    for( int i=0;i<length;i++)
    {
        printf("%d\t",array[i]);
    }
}

void reversArray(int arr[],int length)
{
    int i,j,temp;
    for(i=0, j = length-1; i<j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}