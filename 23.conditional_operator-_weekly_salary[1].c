#include<stdio.h>
int main()
{
    int x;
    double weeklysalary;

    printf("enter the number of products sold in a week: ");
    scanf("%d", &x);

    weeklysalary=(x<40)?(4*x+100):((x==40)?300:(4.5*x+150));

    printf("weekly salary: %.2f\n", weeklysalary);

    return 0;
}