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
	if((fp=fopen("students.txt","w"))==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	printf("Enter number of records : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		system("cls");
		printf("Enter the data for Student %d\n", i);
		printf("Enter name : ");
        fflush(stdin);
		scanf("%s",stu.name);
		printf("Enter roll : ");
		scanf("%d",&stu.roll);
		printf("Enter marks : ");
		scanf("%f", &stu.marks);
		fprintf(fp,"%s %d %f  ",stu.name,stu.roll,stu.marks);

        // printf("\n%s\n%d\n%.2f",stu.name,stu.roll,stu.marks);
	}
    fclose(fp);
     
	return 0;
}