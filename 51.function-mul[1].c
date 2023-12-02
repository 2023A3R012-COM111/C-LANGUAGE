#include<stdio.h>
int mul(int x,int y);
int main()
{
    int y;
    y=mul(10,5);
}
int mul(int x,int y)
{
    int p;
    p=x*y;
    printf("multiplication result is %d. ",p);
    return (p);
}
