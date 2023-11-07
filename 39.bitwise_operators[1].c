#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two integers: ");
    scanf("%d %d", &a, &b);

    //bitwise AND
    printf("For AND operator, the result of a & b= %d\n", a & b);

    //bitwise OR
    printf("For OR operator, the result of a|b= %d\n", a|b);

    //bitwise XOR
    printf("For XOR operator, the result of a^b= %d\n", a^b);

    //bitwise NOT(complement)- unary operator
    printf("For NOT operator, the result of ~a= %d\n", ~a);
    printf("For NOT operator, the result of ~b= %d\n", ~b);

    ///left shift
    printf("For left shift operator, the result of a << 1= %d\n", a<<1);

    //right shift
    printf("For right shift operator, the result of b >> 1= %d\n", b>>1);

    return 0;

}