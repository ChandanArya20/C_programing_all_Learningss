#include<stdio.h>
#define SIZE 50
int main()
{
    int arr[SIZE],length,i,j,min;
    printf("Enter the length of Array : ");
    scanf("%d",&length);
    printf("Enter the %d elements : ",length);
    for(i = 0; i < length; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < length; i++)
    {
        min=arr[i];
        for (j = i+1; j < length; j++)
        {
             if(arr[j] < min)
                min=arr[j];
        }
        printf("Min = %d",min);
    }

    return 0;
}