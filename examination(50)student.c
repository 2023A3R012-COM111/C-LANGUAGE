#include<stdio.h>

#define Maxval 50
#define Counter 11
int main()
{
    float value[Maxval];
    int i, low, high;
    int group[Counter] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    /*reading and counting*/
    printf("Enter marks for %d student:\n", Maxval);
    for(i=0; i< Maxval; i++)
    {
        /*reading of value*/
        printf("enter the marks for the student %d:", i+1);
        scanf("%f", &value[i]);
        /*counting frequency of groups*/
        ++group[(int)(value[i])/10];
    }
    /*printing of frequency table*/
    printf("\nGroup Range Frequency\n\n");
    for(i = 0; i< Counter; i++)
    {
        low = i*10;
        if(i ==10)
            high = 100;
        else
            high = low + 9;
        printf("%2d %3d to %3d %d\n", i+ 1, low, high, group[i]);
    }
    return 0;

}



