#include<stdio.h>
#include<math.h>
int main ()
{
    float Temperature;
 //Enter the value of temperature
 printf("Enter the value of temperature");
 scanf("%f", &Temperature);

     if (Temperature<20)
     {
             printf("The weather is cold today");
     }
     else
        printf("The weather is hot today");


 return 0;
}
