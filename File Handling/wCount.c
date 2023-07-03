#include<stdio.h>
#include<stdlib.h>
int isEnd(int ch);
int main()
{
    FILE *fp;
    int ch, count=0;
    char buff[100];

    if((fp=fopen("text.txt","r"))==NULL)
    {
        printf("Error in opening the file");
        exit(1);
    }
    else
    {
        while((fgets(buff, 100, fp)!=NULL))
        {
            for(int i=1; buff[i]!='\0'; i++) 
            {
                if(isEnd(buff[i]) && !isEnd(buff[i-1]))
                {
                    count++;
                }
            }
        }
    }
    printf("No. of word = %d",count);

    return 0;
}
int isEnd(int ch)
{
    if(ch==' ' || ch=='.' || ch==',' || ch==':' || ch=='-' || ch==';' || ch=='\n' || ch=='\t')
    {
        return 1;
    }
    return 0;
}