#include<stdio.h>
#include<math.h>
int str_to_i(char *str);
int main()
{
    char str[20];
    int num;
    printf("Enter a string: ");
    scanf("%s",str);
    num= str_to_i(str);
    printf("Number: %d",num);

    return 0;
}
int str_to_i(char *str)
{
    int i=0, sign=1, num=0;
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
    num=sign*num;
    return num;
}