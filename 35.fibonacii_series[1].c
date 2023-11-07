#include<stdio.h>
int main()
{
    int f0,f1,f2,i,count;
    f0=0;
    f1=1;
    
    printf("enter the number of elements: ");
    scanf("%d", &count);

    printf("\n%d %d",f0,f1);
    
    for(i=2;i<count;++i)
    {
        f2=f0+f1;
        printf(" %d",f2);    
        f0=f1;    
        f1=f2;    
        
    }
    return 0;
}