#include<stdio.h>
int main ()
{
    int row, col;
    scanf("%d %d",&row,&col);
    int n[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&n[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",n[i][j]);
        }
        printf("\n");
    }
    return 0;
}
