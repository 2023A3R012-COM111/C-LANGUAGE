#include<stdio.h>
int main()
{
    int i;
    float sum=0;

    for(i=0;i<=5;++i);
    {
        sum=sum + 1/(float)i;
        printf("%d %.4f\n", i,sum);
    }
    return 0;
}