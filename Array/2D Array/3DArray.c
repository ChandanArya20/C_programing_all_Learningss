#include<stdio.h>
#define BLOCK 3
#define ROW 3
#define COL 2
int main()
{
    int mat[BLOCK][ROW][COL],i,j,k;
    printf("Enter the element for 3D [%d][%d][%d] : \n",BLOCK,ROW,COL);
    for ( i = 0; i < BLOCK; i++)
    {
        for ( j = 0; j < ROW; j++)
        {   
            for ( k = 0; k < COL; k++)
            {
                scanf("%d",&mat[i][j][k]);
            }
        }
    }
    printf("Printing of 3D Array :\n");
    for ( i = 0; i < BLOCK; i++)
    {
        for ( j = 0; j < ROW; j++)
        {   
            for ( k = 0; k < COL; k++)
            {
                printf("%d ",mat[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}