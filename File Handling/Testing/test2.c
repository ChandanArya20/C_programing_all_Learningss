#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    int ch;
    if((fptr=fopen("text.txt","r"))==NULL)
    {
        printf("Error in opening file");
        exit(0);
    }
    while((ch=fgetc(fptr))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fptr);

    return 0;
}