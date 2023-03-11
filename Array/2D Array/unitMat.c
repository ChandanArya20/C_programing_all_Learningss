#include<stdio.h>
#define ROW 3
#define COL 3
int main()
{
    int mat[ROW][COL],i,j,flag=1;
    if(ROW!=COL)
        printf("This is not a valid matrix for unit matrix");
    else
    {
        printf("Enter matrix [%dX%d]\n",ROW,COL);
        for ( i = 0; i < ROW; i++)
        {
            for(j=0; j < COL; j++)
            {
                scanf("%d",&mat[i][j]);
            }
        }
        for ( i = 0; i < ROW && flag==1 ; i++)
        {
            for(j=0; j < COL; j++)
            {
                if(i==j)
                {
                    if(mat[i][j]!=1)
                    {
                        flag=0;
                        break;
                    }  
                }
                else if(mat[i][j]!=0)
                {
                    flag=0;
                    break;
                }

            }
        }
    }
    if(flag==1)
        printf("This matrix is unit matrix.");
    else
        printf("This matrix is not unit matrix.");
    return 0;
}