#include<stdio.h>
//function prototype
void swapx(int x, int y);
//Main function
int main()
{
    int a= 10, b= 20;
    //pass by values
    swapx(a,b);//actual parameters
    printf("In the caller function value are:\na = %d b = %d\n", a, b);
    return 0;
}
//swap functions that swaps two values
void swapx(int x, int y)// Formal parameters
{
    int t;

    t = x;
    x = y;
    y = t;

    printf("inside function values are:\nx = %d y = %d\n", x, y);
}
