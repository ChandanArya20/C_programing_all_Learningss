#include<stdio.h>
#define ROW 3
#define COL 2
int main()
{
    int mat1[ROW][COL],mat2[ROW][COL],i,j,flag=1;
    printf("Enter the matrix [%d][%d] row-wise : \n",ROW,COL);
    for ( i = 0; i < ROW; i++)
    {
        for(j=0; j < COL; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    for ( i = 0; i < COL; i++)
    {
        for(j=0; j < ROW; j++)
        {
             mat2[i][j] =mat1[j][i]; 
        }
    }
    printf("After transpose of matrix : \n");
    for ( i = 0; i < COL  ; i++)
    {
        for(j=0; j < ROW; j++)
        {
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}