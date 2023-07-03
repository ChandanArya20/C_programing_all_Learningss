#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    char str[50];
    if((fptr=fopen("text2.txt","w"))==NULL)
    {
        printf("Error in opening file");
        exit(0);
    }
    printf("Enter text : ");
    while((gets(str))!=NULL)
    {
        fputs(str,fptr);
    }
    fclose(fptr);

    return 0;
}