#include<stdio.h>
int main ()
{
    int averageMarks;
    printf("Enter the average marks");
    scanf("%d", & averageMarks);
    if (80<=averageMarks && averageMarks<=100)
    {
        printf("Grade alloted: Honours\n");
    }
    else if (60<=averageMarks && averageMarks<=79)
    {
        printf("Grade alloted: First Division\n");
    }
    else if (50<=averageMarks && averageMarks<=59)
    {
        printf("Grade alloted: Second Division\n");
    }
    else if (40<=averageMarks && averageMarks<=49)
    {
        printf("Grade alloted: Third Division\n");
    }
    else if (0<=averageMarks && averageMarks<=39)
    {
        printf("Grade alloted: FAIL\n");

    }
    else
    {
        printf("Enter Valid Input");
    }
    return 0;
}
