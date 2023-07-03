#include<stdio.h>
#include<stdlib.h> 
int main(int argc, char *argv[])
{
     FILE *fp1,*fp2,*fp3;
     int c;
     if(argc!=3)
     {
         printf("Wrong Arguments");
     }
     else
     {
        fp1=fopen(argv[1],"rb");
        if(fp1==NULL)
        {
            printf("Error in Opening file in read");
            exit(1);
        }
        fp2=fopen(argv[2],"wb");
        if(fp2==NULL)
        {
            printf("Error in Opening file");
            exit(1);
        }
        while((c=fgetc(fp1))!=EOF)
            fputc(c,fp2);
        printf("Copied successfully");
        fclose(fp1);
        fclose(fp2);
     }

     return 0;
}
