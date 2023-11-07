#include<stdio.h>
int main()
{
    int a,i=2;
    int prime;

     printf("enter a value: ");
     scanf("%d",&a);

     if(a<=1)
     {
        printf("%d is not a prime number.", a);
     }
     else
     {
        while(i<=a/2)
        {
            if(a%i==0)
            {
                printf("%d is not a prime number.", a);
                break;
            }
            i++;
        }
     }
     if(prime)
        { 
            printf("Number is prime number.");
        }
        else
        {
            printf(" Number is not a prime number.");
        }
     return 0;
}
