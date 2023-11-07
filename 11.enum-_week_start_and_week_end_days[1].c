#include<stdio.h>
enum day{monday, tuesday, wednesday, thursday, friday, saturday};
int main()
{
    enum day week_start, week_end;

    printf("enter the start of the week (0=monday,1=tuesday,2=wednesday,3=thursday,4=friday,5=saturday,6=sunaday): ");
    scanf("%d", &week_start);

    printf("enter the end of the week (0=monday,1=tuesday,2=wednesday,3=thursday,4=friday,5=saturday,6=sunaday): ");
    scanf("%d", &week_end);

    if(week_start == tuesday)
    {
        week_end = saturday;
    }
    else if(week_start == monday)
    {
        week_end = friday;
    }
    else
    printf("enter valid week start day\n");

    printf("user has entered following choices: \n");

    printf("start of the week: %d\n",week_start);
    printf("end of the week: %d\n", week_end);

    return 0;
}