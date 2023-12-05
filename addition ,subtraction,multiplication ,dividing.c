#include<stdio.h>
int main()
{
  int a,b;
  float result;
  printf("enter first number");
  scanf("%d",&a);

  printf(enter the second number);
  scanf("%d",&b);

  result=a+b;
  printf("sum:%f\n",result);

  result=a-b;
  printf("difference:%f\n",result);

  result=a*b;
  printf("multiply:%f\n",result);

  result=a%b;
  printf("remainder:%f\n",result);

  return 0;
}
