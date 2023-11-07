#include<stdio.h>
int main()
{
    int num1, num2;
    float a,b,c,d,e;

    printf("enter the first integer: ");
    scanf("%d", &num1);

    printf("enter the second integer: ");
    scanf("%d", &num2);

    a= num1+num2;
    printf("sum: %f\n", a);

    b= num1-num2;
    printf("difference: %f\n", b);

    c= num1*num2;
    printf("product: %f\n", c);

    d= num1/num2;
    printf("remainder: %f\n", d);

    e= num1%num2;
    printf("modulus: %f\n", e);

    return 0;
}