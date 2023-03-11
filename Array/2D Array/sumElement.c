#include<stdio.h>
#define ROW 20
#define COLUMS 20
int main()
{
    int mat[ROW][COLUMS],row,colums,i,j,sum=0;
    printf("Enter the No. Of Rows = ");
    scanf("%d",&row);
    printf("Enter the No. Of colums = ");
    scanf("%d",&colums);
    printf("Enter the Elements : ");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < colums; j++)
        {
            scanf("%d",&mat[i][j]);
            sum+=mat[i][j];
        }
    }
    printf("sum = %d\n",sum);
    return 0;
}