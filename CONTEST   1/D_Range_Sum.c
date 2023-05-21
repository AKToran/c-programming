#include<stdio.h>
#include<math.h>
int main ()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        long long int j,k;
        scanf("%lld %lld",&j,&k);
        if(j>k)
        {
            long long int tmp=j;
            j=k;
            k=tmp;
        }
        long long int sum=((k*(k+1))/2)-(((j-1)*j)/2);
        printf("%lld\n",sum );
    }
    return 0;
}


