#include<stdio.h>
#define ROW 3
#define COL 2
int main()
{
    int mat[ROW][COL],i,j,k,l,flag=1;
    printf("Enter the matrix [%d][%d] row-wise : \n",ROW,COL);
    for ( i = 0; i < ROW; i++)
    {
        for(j=0; j < COL; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for ( i = 0; i < ROW; i++)
    {
        for(j=0; j < COL; j++)
        {
            for ( k = 0; i < ROW; i++)
            {
                for(l=0; j < COL; j++)
                {
                    if(mat[i][j]==mat[k][l])
                    {
                        flag=0;
                        break;
                    }
                }
            }
            
        }
    }
    if(flag==1)
        printf("Element are distinct");
    else
        printf("Element are not distinct");
    
    return 0;
}