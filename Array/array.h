#include <stdio.h>
#include <stdlib.h>
#define SIZE 50
typedef int KeyType;

typedef struct DataType
{
	KeyType key;
}DataType;

typedef struct ArrayType
{
	DataType element[SIZE];
	int length;
}ArrayType;

ArrayType createArray();
void Exit();
int mainMenu();
int insertMenu();
int isFull(ArrayType *array);
DataType readData();
void insertAtEnd(ArrayType *array,DataType data);
void insertAtBig(ArrayType *array,DataType data);
void insertAtDesiredLoc(ArrayType *array,DataType data,int loc);
void printData(ArrayType *array);

