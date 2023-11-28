#include<stdio.h>
int addition(int num1, int num2)
{
    int sum;
    /*Arguments are used here*/
    sum= num1+num2;
    /*Function return type is integer so we return a integer value,
    return sum;
}
int main()
{
    int var1, var2;
    printf("Enter number 1: ");
    scanf("%d",&var1);
    printf("Enter the number 2: ");
    scanf("%d",&var2);
    /*calling the function here, the function return type *is integer so we need an integer variable to hold the returned value of this function.*/
    int res = addition(var1, var2);
    printf("Output: %d",res);
}
