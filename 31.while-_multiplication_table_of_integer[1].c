#include<stdio.h>
int main()
{
    int count,I;
    count=1;
    I=1;
    
    printf("enter the desired digit: ");
    scanf("%d", &I);
    do
    {
        printf("%dX%d=%d\n", I,count,I*count);
        count++;
    }
    while(count<=10);
    
    return 0; 
}