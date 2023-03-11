#include<stdio.h>
#define SIZE 50
int main()
{
    int arr[SIZE],length,i,j,max,secLarge;
    printf("Enter the length of Array : ");
    scanf("%d",&length);
    printf("Enter the %d elements : ",length);
    for(i = 0; i < length; i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for ( i = 1; i < length; i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    secLarge=arr[0];
    for ( i = 1; i < length; i++)
    {
            if(arr[i]>secLarge && arr[i]<max)
                secLarge=arr[i];
        
    }
    printf("Second largest Array is %d", secLarge);


    return 0;
}