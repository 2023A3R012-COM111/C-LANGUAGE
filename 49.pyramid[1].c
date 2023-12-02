#include<stdio.h>
int main()
{
    int rows,i,n,space;
    printf("enter the number of rows: ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(space=1;space<=rows-i;space++)
        {
            printf(" ");
        }
        for(n=1;n<=2*i-1;n++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
    
}
