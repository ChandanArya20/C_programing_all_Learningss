#include<stdio.h>
// #include<stdlib.h>
int main()
{
    FILE *fptr;
    char str[50];
    if((fptr=fopen("text.txt","r"))==NULL)
    {
        printf("Error in opening file");
        exit(0);
    }
    while((fgets(str,50,fptr))!=NULL)
    {
        puts(str);
    }
    fclose(fptr);

    return 0;
}