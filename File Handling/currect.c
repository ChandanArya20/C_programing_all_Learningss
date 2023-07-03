#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int isVowel(char ch);
int main()
{
    FILE *fp, *tempfp;
    char buff[100], tempbuff[200];
    int i,j;
    if((fp=fopen("text.txt","r"))==NULL)
    {
        printf("Error in opening the file");
        exit(1);
    }
    if((tempfp=fopen("temp.txt","w"))==NULL)
    {
        printf("Error in opening the file");
        exit(1);
    }
    while(fgets(buff, 100, fp)!=NULL)
    {
        i=j=0;
        while(buff[i]!='\0')
        {
            if(islower(buff[i]) && (i==0 || buff[i-1]=='.'))
            {
                tempbuff[j]=toupper(buff[i]);
                i++;
                j++;
            }
            else if(buff[i]==' ' && buff[i-1]=='a' && isVowel(buff[i+1]))
            {
                tempbuff[j]='n';
                j++;
                tempbuff[j]=buff[i];
                i++;
                j++;
            }
            else
            {
                tempbuff[j]=buff[i];
                i++;
                j++;
            }
        }
        tempbuff[j]='\0';
        fputs(tempbuff, tempfp);      
    }
    fclose(fp);
    fclose(tempfp);
    remove("text.txt");
    rename("temp.txt","text.txt");
    printf("Successfull");

    return 0;
}
int isVowel(char ch)
{
    if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' ||ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' || \
    ch=='U')
    {
        return 1;
    }
    return  0;
}