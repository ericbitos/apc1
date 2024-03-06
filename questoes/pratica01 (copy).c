#include <stdio.h>

int main(){
  float A1= 0.0;
  float A2= 0.0;

  printf("informe o valor da area da primeira nota: ");
  scanf("%f", &A1);

  printf("informe o valor da area da segunda nota: ");
  scanf("%f", &A2);
  
  float media = 0.4 * A1 + 0.6 * A2;
  printf("A media é %f\n", media);
    
  return 0;
}