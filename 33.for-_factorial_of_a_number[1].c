#include<stdio.h>
int main()
{
    int x;
    long long factorial=1;

    printf("enter the desired number: ");
    scanf("%d", &x);
    if(x<0)
    {
        printf("factorial is not defined for neagative integer.\n");
    }
    else
    {
        for(int n=1;n<=x;n++)
    {
        factorial*=n;
    }
    }
    printf("factorial of %d=%lld\n",x,factorial);

    return 0;
}