#include<stdio.h>
int main()
{
    int a,n,sum;
    sum=0;

    printf("enter the number: ");
    scanf("%d",&n);

    while(n>0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    printf("sum is %d",sum);

    return 0;
}
