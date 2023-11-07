#include<stdio.h>
#include<time.h>
#include<string.h>
int main()
{
    time_t current_time;
    time(&current_time);

    printf("step 2: current time in seconds since the epoch: %ld\n",current_time);

    char time_str[30];
    strcpy(time_str,ctime(&current_time));
    printf("step 3: current time as a formatted string: %s",time_str);

    time_t future_time=current_time + 31536000;
    char future_time_str[30];
    strcpy(future_time_str,ctime(&future_time));

    printf("step 4: one year from now: %s",future_time_str);

    return 0;
    
}