#include <stdio.h>
int main()
{
  //declara variaveis
  int x;
  int y;
  int soma;
  int sub;
  int multi;
  float div;
  x=5;
  y=10;
  soma = x + y;
   sub= x-y;
  multi= x*y;
  div=(float)x/y;
  printf("\nResultado da soma=%d\n", soma);
  printf("\nResultado da subtraçao=%d\n", sub);
  printf("\nResultado da multiplicaçao=%d\n", multi);
  printf("\nResultado da divisao=%f\n", div);
  
  return 0;
}
