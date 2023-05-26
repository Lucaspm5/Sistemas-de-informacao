#include <stdio.h>
#include <math.h>

double juroscompostos(double valor, double taxa, int meses) 
{
  if (meses == 0) return valor;
  else return (1 + taxa/100) * juroscompostos(valor, taxa, meses - 1);
}


int main() 
{
    double valor, taxa;
    int meses;

    puts("Informe respectivamente o valor inicial, numero de meses e taxa de juros ao mês:");
    scanf("%lf %lf %d",&valor, &taxa, &meses);

    printf("Lucro: R%c %.2lf\n", 36, (juroscompostos(valor, taxa, meses) - valor));
    printf("O valor final eh: R%c %.2lf\n",36, juroscompostos(valor, taxa, meses));

  return 0;
}


