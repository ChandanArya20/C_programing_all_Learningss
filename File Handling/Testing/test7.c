#include <stdio.h>
#include <stdlib.h>
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
    int i, n;
    if ((fp = fopen("students.txt", "r")) == NULL)
    {
        printf("Error in opening file\n");
        exit(1);
    }
    system("cls");
    printf("\nNAME\t\tROLL\tMARKS\n");
    while (fscanf(fp, "%s%d%f", stu.name, &stu.roll, &stu.marks) != EOF)
    {
        printf("\n%s\t\t%d\t%.3f", stu.name, stu.roll, stu.marks);
    }
    fclose(fp);

    return 0;
}