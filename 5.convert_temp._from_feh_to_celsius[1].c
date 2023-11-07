#include<stdio.h>
#include<math.h>
int main ()
{
    float a,b;
    //Enter the value of temperature in Fahrenheit
    printf("Enter the value of temperature in Fahrenheit");
    scanf("%f",&a);
    b=5.0/9.0*(a-32);
    printf ("The value of temperature in celsius is %f",b);
    return 0;
}
