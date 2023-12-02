#include<stdio.h>
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);
int mod(int x, int y);
int main()
{
   int a;
   a=add(7,11);

   int b;
   b=sub(7,11);

   int c;
   c=mul(7,11);

   int d;
   d=div(18,9);

   int e;
   e=mod(11,7);
}
int add(int x, int y)
{
int p;
    p=x+y;
    printf("addition result is %d. ",p);
    printf("\n");
    return (p);
}
int sub(int x, int y)
{
int q;
    q=x-y;
    printf("subtraction result is %d. ",q);
    printf("\n");
    return (q);
}
int mul(int x, int y)
{
int r;
    r=x*y;
    printf("multiplication result is %d. ",r);
    printf("\n");
    return (r);
}
int div(int x, int y)
{
int s;
    s=x/y;
    printf("division result is %d. ",s);
    printf("\n");
    return (s);
}
int mod(int x, int y)
{
int t;
    t=x%y;
    printf("modulus result is %d. ",t);
    printf("\n");
    return (t);
}



