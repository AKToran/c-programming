#include<stdio.h>
#include<limits.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]+1==arr[j])
            {
                cnt+=1;
                break;
            }
        }
    }

    printf("%d",cnt);

    // for(int i=0;i<n;i++)
    // {
    //     printf("%d ",arr[i]);
    // }
    return 0;
}
