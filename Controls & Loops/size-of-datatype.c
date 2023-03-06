#include<stdio.h>
int main()
{
	printf("\n              Size of char = %u",sizeof(char));
	printf("\n               Size of int = %u",sizeof(int));
	printf("\n         Size of short int = %u",sizeof(short));
	printf("\n          Size of long int = %u",sizeof(long));
	printf("\n     Size of long long int = %u",sizeof(long long));
	printf("\n             Size of float = %u",sizeof(float));
	printf("\n            Size of double = %u",sizeof(double));
	printf("\n       Size of long double = %u",sizeof(long double));
	printf("\n             Size of test  = %u",sizeof("ABC"));
	
	return 0;
}
