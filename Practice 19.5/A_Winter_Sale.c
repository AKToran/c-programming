#include<stdio.h>
int main ()
{
    float d, dp, op;
    scanf("%f %f",&d,&dp);
    d=d/100;
    op=dp/(1-d);
    printf("%.2f",op);
    return 0;
}
