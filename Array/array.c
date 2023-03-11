#include"array.h"
int mainMenu()
{
	int choice;
	printf("\n Choose choice accordingly\n\n 1----> Create an Array\n 2----> Insert data in array\
	\n 3----> Display the Data\n 4----> Leanear Search in Array\n 5----> Binary search in Array \
	\n 6----> Delete an element of Array\n 7----> Sort the Array\n 8----> Reverse the elements of array\n 0----> Exit\n Enter your choice - ");
	scanf("%d",&choice);	
   	return choice; 
}

int insertMenu()
{	int choice;
	printf("\n\n Choose choice accordingly\n\n 1----> Insert At End\n 2----> Insert At Beg\
	\n 3----> Insert at desired location\n 4----> Insert at sorted Order\n 5----> Insert all data at one time\
	\n 6----> Back to Main Menu\n 0----> Exit\n Enter your choice - ");
	scanf("%d",&choice);
	return choice;	
}
ArrayType createArray()
{
	ArrayType array;
	array.length=0;
	return array;
}
void Exit()
{
	system("cls");
	printf(" Thank you, Visit again");
	exit(0);
}

int isFull(ArrayType *array)
{
	if(array->length==SIZE)	
	{
		return 1;
	}
	return 0;
}

DataType readData()
{
	DataType data;
	printf(" Enter data : ");
	scanf("%d",&data.key);
	return data;
}
void insertAtEnd(ArrayType *array, DataType data)
{
	array->element[array->length]= data;
	(array->length)++;
}
void insertAtBig(ArrayType *array,DataType data)
{
	int i;
	for(i= array->length; i>0; i--)
	{
		array->element[i] = array->element[i-1];
		(array->length)++;
	}
	array->element[i]=data;
}
void insertAtDesiredLoc(ArrayType *array,DataType data,int loc)
{
	int i;
	for(i= array->length; i>loc-1; i--)
	{
		array->element[i]= array->element[i-1];
		(array->length)++;
	}
	array->element[i]= data;
}
void printData(ArrayType *array)
{
	int i;
	for(i=0; i < array->length; i++)
	{
		printf(" ");
		printf("%d", (array->element[i]).key);
	}
}











