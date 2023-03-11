#include<stdio.h>
#define ROW 3
#define COL 3
int main()
{
    int mat[ROW][COL],i,j,flag=1;
    if(ROW!=COL)
        printf("PLease insert Squre matrix");
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
                    if(mat[i][j]!=mat[0][0])
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
        printf("This matrix is scaler matrix.");
    else
        printf("This matrix is not scaler matrix.");
    return 0;
}