#include<stdio.h>
#include<stdlib.h>
struct student
{	
	char name[20];
    int roll;
	float marks;
};
int main()
{
	FILE *fp;
    struct student stu;
	int i,n;
	if((fp=fopen("students1.dat","wb+"))==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	printf("Enter number of records : ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
        system("cls");
        printf("Enter record for student %d\n",i+1);
		printf("Enter name : ");
        fflush(stdin);
        scanf("%[^\n]s",stu.name);
		printf("Enter roll : ");
        scanf("%d",&stu.roll);
		printf("Enter marks : ");
        scanf("%f",&stu.marks);
		fwrite(&stu, sizeof(stu), 1, fp);
	}
	rewind(fp);
	printf("\nNAME\t\tROLL\tMARKS\n");
	while(fread(&stu, sizeof(stu), 1, fp)==1)
    {
        printf("\n%s\t%d\t%.2f",stu.name,stu.roll,stu.marks);
    }
    fclose(fp);

	return 0;
}