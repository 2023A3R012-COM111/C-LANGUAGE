#include<stdio.h>
int main()
{
    int b=5,y;
    y=++b;

    printf("%d\t",y);
    printf("%d",b);

    y=b++;

    printf("\n%d\t",y);
    printf("%d",b);

    y=--b;

    printf("\n%d\t",y);
    printf("%d",b);

    y=b--;
    printf("\n%d\t",y);
    printf("%d",b);

    return 0;

}
