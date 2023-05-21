#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d ", &arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            int j=i-1, k=0;
            while (k<j)
            {
                int temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
                j--;
                k++;
            }
            
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
