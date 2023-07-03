#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    int ch;
    if((fptr=fopen("text.txt","w"))==NULL)
    {
        printf("Error in opening file");
        exit(0);
    }
    printf("Enter text : ");
    while((ch=getchar()) != '\n')
    {
        fputc(ch,fptr);
    }
    fclose(fptr);

    return 0;
}