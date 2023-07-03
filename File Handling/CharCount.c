#include<stdio.h>
#include<stdlib.h>
// int lineCount(FILE *fp);
int main()
{
    FILE *fp;
    int ch, count=0;

    if((fp=fopen("text.txt","r"))==NULL)
    {
        printf("Error in opening the file");
        exit(1);
    }
    else
        while((ch=fgetc(fp))!=EOF)
        {
            if(ch==' ' || ch=='\n')
                continue;
            count++;
        }
    printf("No. of character = %d",count);

    return 0;
}