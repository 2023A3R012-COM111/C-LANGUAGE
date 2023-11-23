#include<stdio.h>
int main()
{
    float sum;
    int i;
    sum=0;
    for (i=1;i<=10;++i)
    {
        sum=sum+1/(float)i;
        printf("%d %.4f\n",i,sum);
    }
    return 0;
}
