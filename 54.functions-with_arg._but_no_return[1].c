#include<stdio.h>
void printline(char c);
void value(float principal,float inrate,int period);

int main()
{
    float principal,inrate;
    int period;

    printf("Principal Amount ?: ");
    scanf("%f", &principal);

    printf("Interest Rate ?: ");
    scanf("%f", &inrate);

    printf("Period ?: ");
    scanf("%d", &period);

    printline('*');
    value(principal,inrate,period);
    printline('*');

    return 0;
}
void printline(char ch)
{
    int i;
    for(i=1;i<=52;i++)
    printf("%c",ch);
    printf("\n");
    
}
void value(float p,float r, int n)
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
    printf("Output:%d\n",sum);
}