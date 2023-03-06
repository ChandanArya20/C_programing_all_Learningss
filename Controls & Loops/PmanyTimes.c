#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	char name[20];
	printf("Enter your name: ");
	scanf("%[^\n]s",name);
	printf("Enter how many times want to print: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("%s ",name);
	}
	return 0;
}
