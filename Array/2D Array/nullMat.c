#include<stdio.h>
#define ROW 3
#define COL 2
int main()
{
    int mat[ROW][COL],i,j,flag=1;
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
            if(mat[i][j]!=0)
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1){
        printf("This matrix is null.");
    }
    else
        printf("This matrix is not null.");
    return 0;
}