#include<stdio.h>
#include<limits.h>
int main ()
{
    int n, k;
    scanf("%d %d",&n, &k);
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min =INT_MAX;
    int j=k;
    for (int i=1;i<=n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
        if(i==j)
        {
            printf("%d ",min);
            min=INT_MAX;
            j=j+k;
        }
    }
    if(n%k!=0)
    {
        printf("%d",min);
    }
    
    return 0;
}
