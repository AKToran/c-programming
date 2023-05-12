#include<stdio.h>
int main ()
{
    int row,col;
    scanf("%d %d",&row, &col);
    int ar[3][4];
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    int count=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(ar[i][j]==0)
            {
                count+=1;
            }
        }
    }
    if(count==row*col)
    {
        printf("This is a NULL matrix\n");
    }
    else 
    {
        printf("Not a NULL matrix\n");
    }
    return 0;
}
