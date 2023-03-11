#include<stdio.h>
#define SIZE 50
int distinctArray(int arr[],int length);

int main()
{
    int arr[SIZE],length,i; 
    printf("How many elements you want to store = ");
    scanf("%d",&length);
    printf("Enter %d elements : ",length);
    for(i=0; i<length; i++)
    {
        scanf("%d",&arr[i]);
    }
    if(distinctArray(arr,length))
        printf("The elements are distinct");
    else
        printf("The elements are not distinct");

    return 0;
}

int distinctArray(int arr[],int length)
{
	int i,j,flag=1;
	for(i=0; i<length; i++)
	{
		for(j=i+1; j<length; j++)
		{
			if(arr[i]==arr[j])
				flag=0;
		}
	}
    return flag;
}
