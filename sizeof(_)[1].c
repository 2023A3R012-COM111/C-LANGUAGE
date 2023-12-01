#include<stdio.h>
int main()
{
    int integervar;
    float floatvar;
    char charvar;

    printf("size of int: %lu bytes\n", sizeof(int));
    printf("size of float: %lu bytes\n", sizeof(float));
    printf("size of char: %lu bytes\n", sizeof(char));

    printf("size of integervar: %lu bytes\n", sizeof(integervar));
    printf("size of floatvar: %lu bytes\n", sizeof(floatvar));
    printf("size of charvar: %lu bytes\n", sizeof(charvar));

    return 0;
}
