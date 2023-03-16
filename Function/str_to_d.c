#include<stdio.h>
#include<math.h>
double str_to_d(char *str);
int main()
{
    char str[20];
    float fnum;
    printf("Enter a string: ");
    scanf("%s",str);
    fnum= str_to_d(str);
    printf("Number: %f",fnum);

    return 0;
}
double str_to_d(char *str)
{
    int i=0, sign=1, j=0;
    double num=0;
    while(str[0]==' ')
        i++;
    
    if(str[i]=='-' || str[i]=='+')
    {
        if(str[i]='-')
        {
            sign= -1;
        }
        i++;
    }
    while(str[i]>47 && str[i]<58)
    {
        num= num*10+(str[i]-'0');
        i++;
    }
    if(str[i]=='.')
    {
        i++;
    }
    while(str[i]>47 && str[i]<58)
    {
        num= num*10+(str[i]-'0');
        i++;
        j++;
    }
    num=sign*num/pow(10,j);
    return num;
}