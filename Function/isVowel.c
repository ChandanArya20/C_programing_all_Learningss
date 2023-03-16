#include<stdio.h>
int isVowel(char ch);
int main()
{
    char ch;
    printf("Enter any character : ");
    scanf("%c",&ch);
    if(isVowel(ch))
    {
        printf("This character is vowel");
    }
    else
        printf("This character is not vowel");

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