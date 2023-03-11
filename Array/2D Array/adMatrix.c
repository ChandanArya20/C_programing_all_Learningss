#include<stdio.h>
#define ROW 3
#define COL 2
int main()
{
    int mat1[ROW][COL],mat2[ROW][COL],mat3[ROW][COL],i,j;
    printf("Enter the first matrix [%d][%d] row-wise : \n",ROW,COL);
    for ( i = 0; i < ROW; i++)
    {
        for ( j = 0; j < COL; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the second matrix [%d][%d] row-wise : \n",ROW,COL);
    for ( i = 0; i < ROW; i++)
    {
        for ( j = 0; j < COL; j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    for ( i = 0; i < ROW; i++)
    {
        for ( j = 0; j < COL; j++)
        {
            mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    printf("Matrixes After adition :\n");
    for ( i = 0; i < ROW; i++)
    {
        for ( j = 0; j < COL; j++)
        {
            printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}