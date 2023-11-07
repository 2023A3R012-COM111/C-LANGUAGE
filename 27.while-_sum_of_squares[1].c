#include<stdio.h>
int main()
{
    int sum=0;
    int n=3;
    while(n<=100)
    {
        sum=sum+n*n;
        n=n+1;
    }
    printf("sum=%d\n", sum);
    return 0;
}
