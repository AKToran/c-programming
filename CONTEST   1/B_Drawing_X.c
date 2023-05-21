#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int fs=1;  // forward_slash
    int bs=n;  //back slash
    int mid=(n+1)/2; //for X
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==mid && i==mid )
            {
                printf("X");
            }
            else if(j==fs)
            {
                printf("\\");
            }
            else if(j==bs)
            {
                printf("/");
            }
            else
            {
                printf("*");
            }
        }
        fs++;
        bs--;
        printf("\n");
    }
    return 0;
}
