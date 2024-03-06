#include <stdio.h>
int main(){
  const float ICMS = 0.17;
  const float COFINS = 0.076;
  const float PIS_PASEP = 0.0165;

  float preco_inicial = 0.0;
  float preco_final = 0.0;

  printf("informe o preço inicial do produto: ");
  scanf("%f", &preco_inicial);

  float valor_do_icms = ICMS * preco_inicial;
  float valor_do_cofins = COFINS * preco_inicial;
  float valor_do_pispasep = PIS_PASEP * preco_inicial;

  preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_inicial;

  printf("O preço final do produto é %f\n", preco_final);
  printf("Valor do ICMS %f\n", valor_do_icms);
  printf("Valor do cofins %f\n", valor_do_cofins);
  printf("Valor do pis/pasep é %f\n", valor_do_pispasep);

  return 0;
}