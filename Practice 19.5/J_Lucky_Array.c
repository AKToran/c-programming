#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int tmp= arr[j];
                arr[j]=arr[i];
                arr[i]=tmp;
            }
        }
    }
    int cnt=0;
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if (arr[i]==min)
        {
            cnt+=1;
        }
    }
    if(cnt%2!=0)
    {
        printf("Lucky");
    }
    else
    {
        printf("Unlucky");
    }

    return 0;
}
