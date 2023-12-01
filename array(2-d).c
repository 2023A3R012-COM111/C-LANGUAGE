#include<stdio.h>

#define Rows 5
#define Column 5

int main()
{
    int rows, column, product[Rows][Column];
    int i, j;
    printf("Multiplications table\n");
    printf("     ");
    for(j= 1; j <= Column; j++)
        printf("%4d", j);
    printf("\n");
    printf("______________________________\n");
    for(i = 0; i < Rows; i++)
    {
        rows = i+1;
        printf("%2d |", rows);
      for(j=1; j<=Column; j++)
      {
          column= j;
          product[i][j] = rows*column;
          printf("%4d", product[i][j]);
      }
      printf("\n");

    }
    return 0;
}
