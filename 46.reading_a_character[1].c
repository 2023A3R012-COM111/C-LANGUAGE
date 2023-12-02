#include<stdio.h>
int main()
{
char answer;

printf("would you like to know my name?\n");
printf("type Y for YES and N for NO: ");

answer = getchar();

if(answer == 'Y' || answer == 'y')
   printf("\n My name is BUSY BEE.\n");
else
   printf("\n You are good for nothing.\n");

return 0;
}