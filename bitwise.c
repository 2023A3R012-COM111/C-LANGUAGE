#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two integer:");
    scanf("%d %d",&a,&b);

    //Bitwise AND
    printf(" For AND operator,the result of a&b=%d\n",a&b);
    //Bitwise OR
    printf(" For OR operator, the result of a|b=%d\n",a|b);
    //Bitwise XOR
    printf(" For XOR operator,the result of a^b=%d\n",a^b);
    //Bitwise NOT(complement)-unary operator
    printf(" For NOT operator,the result of ~a=%d\n",~a);
    printf(" For NOT operator,the result of ~b=%d\n",~b);
    //left shift
    printf("a<<1=%d\n",a<<1);
    //right shift
    printf("b>>1=%d\n",b>>1);

    return 0;
}
