#include<stdio.h>
void printline(char ch, int len);
float value(float p,float r,int n);

int main()
{
    float principal,inrate,amount;
    int period;

    printf("Principal Amount ?: ");
    scanf("%f", &principal);

    printf("Interest Rate ?: ");
    scanf("%f", &inrate);

    printf("Period ?: ");
    scanf("%d", &period);

    printline('*',52);
    amount=value(principal,inrate,period);
    printf("\nP=%f,\tR=%f,\tN=%d\t:>\tSum=%f\n",principal,inrate,period,amount);
    printline('*',52);
    return 0;
}
void printline(char ch, int len)
{
    int i;
    for(i=1;i<=len;i++)
    printf("%c",ch);
    printf("\n");
}
float value(float p,float r, int n)
{
    int year;
    float sum;
    sum = p;
    year = 1;

    while(year<=n)
    {
        sum=sum*(1+r);
        year=year+1;
    }
    return sum;
}


     
     
