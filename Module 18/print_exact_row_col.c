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
    int f;
    scanf("%d",&f);
    // fixed row
    for(int j=0;j<col;j++)
    {
        printf("%d ",n[f][j]);
    }
    printf("\n");
    // fixed column
    for(int j=0;j<row;j++)
    {
        printf("%d\n",n[j][f]);
    }
    return 0;
}
