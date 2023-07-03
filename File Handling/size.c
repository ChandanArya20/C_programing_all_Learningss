#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    FILE *fp;
    int size;
    float size1;
    if((fp=fopen(argv[1],"rb"))!=NULL)
    {
        if(fseek(fp, 0, SEEK_END)==0)
        {
        	size=ftell(fp);
        	size1=(float)size; 
        	if(size1>=1024 && size1<1048576)
        		printf("SIZE = %.2fKB",size1/1024);
        	else if(size1>=1048576 && size1<1073741824)
        		printf("SIZE = %.2fMB",size1/(1024*1024));
        	else if(size1>=1073741824)
        		printf("SIZE = %.2fGB",size1/(1024*1024*1024));
        	else
        		printf("SIZE = %.2fbytes",size1);	
        	
		}  
		   
    }
    else 
    {
        printf("File is not avilable");
    }
    return 0;
}
