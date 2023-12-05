#include<stdio.h>
int main()
{
    char answer;

    printf("would you like to know my name?\n");
    printf("type Y for Yes and N for NO:");

    answer=getchar();

    if(answer == 'Y' || answer == 'y')
        printf("\nMy name is BUSY BEE\n");
    else
        printf("\nYou are good for nothing\n");

    return 0;

}
