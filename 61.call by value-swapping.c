#include<stdio.h>
void swap(int a, int b );
int main()
{
    int a=10, b=20;
    //pass by values
    swap(a,b);//actual parameters
    printf("In the caller function values are: \na=%d b=%d\n",a,b);
    return 0;
}
//swap functions that swap two values
void swap(int a, int b)//formal parameters
{
    int swapvar;

    swapvar=a;
    a=b;
    b=swapvar;

    printf("Inside function values are: \na=%d b=%d\n",a,b );
}