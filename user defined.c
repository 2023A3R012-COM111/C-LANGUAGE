#include<stdio.h>
//function prototype also called function declaration
float square(float x);
int main()
{
    float m, n ;
    printf("\nEnter some number for finding square \n");
    scanf("%f",&m);
    n = square(m);//function call
    printf("\nSquare of the given number %f is %f", m, n);
}
float square(float x)
{
    float p;
    p = x * x;
    return(p);
}
