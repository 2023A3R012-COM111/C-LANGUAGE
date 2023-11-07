#include<stdio.h>
#include<math.h>
int main()
{
    int num,originalnum,remainder,n=0,result=0;
    //input from the user
    printf("enter the number:");
    scanf("%d",&num);
    originalnum = num;
    //count the number of digits(n) in the number
    while(originalnum!=0)
    {
        originalnum/=10;
        ++n;
    }
    originalnum=num;
    //calculate the sum of each digit raised to the power of n 
    while(originalnum != 0)
    {
        remainder=originalnum % 10;
        result+=pow(remainder,n);
        originalnum/=10;
    }
    //check if the result is equal to the original number
    if(result==num)
    {
        printf("%d is an armstrong number.\n",num);
    }
    else{
        printf("%d is not an armstrong number.\n",num);
    }
    return 0;
}