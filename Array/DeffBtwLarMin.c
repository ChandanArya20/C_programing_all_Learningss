#include<stdio.h>
#define SIZE 50
int main()
{
    int arr[SIZE],length,i,max,min;
    printf("Enter the length of Array : ");
    scanf("%d",&length);
    printf("Enter the %d elements : ",length);
    for(i = 0; i < length; i++)
    {
        scanf("%d",&arr[i]);
    }
    max=min=arr[0];
    for ( i = 1; i < length; i++)
    {
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    printf("Difference btw Max And Min = %d",max-min);

    return 0;
}