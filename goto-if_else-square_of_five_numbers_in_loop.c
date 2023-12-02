#include<stdio.h> 
#include<math.h>
int main ()
{double x,y;
int count =1;
printf("Enter FIVE real values in a LINE\n");

read:
    scanf("%lf", &x);

    if (x<0)
    {
        printf("Value - %d is negative\n",count);
    }
    else
    {
        y=sqrt(x);
        printf("%lf %lf\n", x , y);
    }
        count = count + 1 ;
        if (count<=5)
        {
          goto read;
        }
    printf("End of computation\n");
    return 0;
}










