#include<stdio.h>
int main ()
{                 
    //PRACTICE MODULE 19.5 WRONG ANS ON TEST 4
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                long long int tmp= arr[j];
                arr[j]=arr[i];
                arr[i]=tmp;
            }
        }
    }
    long long int sum=0;
    for(int i=0;i<k;i++)
    {
        sum=sum+arr[i];
    }
    printf("%lld",sum);
    return 0;
}
