#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    char name[20];
    int roll;
    if((fptr=fopen("text3.txt","w"))==NULL)
    {
        printf("Error in opening file");
        exit(0);
    }
    printf("Enter name : ");
    scanf("%[^\n]s",&name);
    fflush(stdin);
    printf("Enter Roll : ");
    scanf("%d",&roll);
    fprintf(fptr,"Your name and roll are %s and %d",name,roll);
    fclose(fptr);

    return 0;
}