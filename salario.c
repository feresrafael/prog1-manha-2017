#include <stdio.h>
int main()
{
  float sb;
  float sl;
  printf("\nEntre com o salario liquido:");
  scanf("%f", &sb);
  sl=sb*0.8;
  printf("\nSalario liquido=%f\n", sl);
  
  return 0;
}