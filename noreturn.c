#include<stdio.h>

void printline(void);
void value(void);

int main()
{
    printline();

    value();

    printline();

    return 0;
}
void printline(void)
{
    int i;
    for(i=1;i<=35;i++)
        printf("%c",'-');
    printf("\n");
}
void value(void)
{
    int year,period;
    float irrate,sum,principal;
    printf("Principal amount?");
    scanf("%f",&principal);

    printf("Interest rate? ");
    scanf("%f",&irrate);

    printf("Period?   ");
    scanf("%d",&period);

    sum=principal;
    year=1;
    while(year<=period)
    {
        sum=sum*(1+irrate);
        year=year+1;
    }
    printf("\n%8.2f %5.2f %5d %12.2f\n",principal,irrate,period,sum);
}
