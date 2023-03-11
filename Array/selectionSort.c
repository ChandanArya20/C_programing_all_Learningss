#include<stdio.h>
#define SIZE 50
void selectionSort(int arr[],int length);

int main()
{
    int arr[SIZE],length,i; 
    printf(" How many elements you want to store = ");
    scanf("%d",&length);
    printf(" Enter %d elements : ",length);
    for(i=0;i<length;i++)
    {
        scanf("%d",&arr[i]);
    }
    selectionSort(arr,length);
    printf("The elements after sorting = ");
    for(i=0; i<length; i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}

void selectionSort(int arr[],int length)
{
	int i,j,min;
	for(i=0;i<length;i++)
	{
		min=i;
		for(j=i+1;j<length;j++)
		{
			if(arr[j]<arr[min])
				min=j;
		}
		if(min!=i)
		{
			int temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}	
	}
}
