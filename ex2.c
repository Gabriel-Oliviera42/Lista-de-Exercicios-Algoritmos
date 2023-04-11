#include <stdio.h>

int main(void) {
  system("clear"); // apaga oque vem antes
  float distancia, combustivel, consumo;
    
  printf("Digite a distância total percorrida (em Km): ");
  scanf("%f", &distancia);
  
  printf("Digite o total de combustível gasto (em litros): ");
  scanf("%f", &combustivel);
    
  consumo = distancia / combustivel;
    
  printf("Consumo médio: %.2f Km/l\n", consumo);
    
  return 0;
}