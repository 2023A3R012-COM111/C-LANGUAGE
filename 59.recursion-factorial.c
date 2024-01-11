#include<stdio.h>
/*function prototype*/
int factorial(int n);
int main()
{
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if(num<0)
    {
        printf("Please enter a non-negative integer. \n");
    }
    else
    {
        /*call the factorial function and display the result*/
        printf("Factorial of %d is: %d\n", num,factorial(num));
    }
    return 0;
}
/*recursion function to calculate factorial */
int factorial(int n)
{
    int fact;
    if(n==1 || n==0)
    {
        /*base case: factorial of 0 or 1 is 1*/
        return 1;
    }
    else
    {
        /*recursion case: n!=n*(n-1)! */
        fact=n*factorial(n-1);
        return fact;
    }
}
