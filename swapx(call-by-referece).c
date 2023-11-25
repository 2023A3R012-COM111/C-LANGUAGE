#include<stdio.h>
//Function Prototype
void swapx(int*,int*);
//Main function
int main()
{
    int a = 20, b = 30;
    //Pass reference
    swapx(&a, &b);//Actual Parameters
    printf("Inside the caller function values are:\na = %d\n", a, b);
    return 0;
}
//Function to swap two variable by reference
void swapx(int* x, int* y)//Formal Parameter
{
    int t;
    t = *x;
    *x = *y;
    *y = t;

    printf("Inside the function values are:\nx = %d y = %d\n",*x,*y);
}
