#include <stdio.h>
//to use 'delay()'
#include <dos1.h>

int main()
{
    for(int j=0;j<11; j++)
    {
        for(int i=0; i<100000000; i++);
        printf("*");
    }
	return 0;
}