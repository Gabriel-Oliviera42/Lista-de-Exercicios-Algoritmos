#include <stdio.h>
#include <math.h>

int main(void) {
  system("clear"); // apaga oque vem antes
  float angulo, distancia, Mescada;
    
  printf("Digite o angulo formado pela escada e o chao (em graus): ");
  scanf("%f", &angulo);
    
  printf("Digite a distancia da escada ate a parede: ");
  scanf("%f", &distancia);
    
    // O cálculo da medida da escada é feito utilizando a fórmula da tangente
  Mescada = distancia * tan(angulo * M_PI / 180);
    
  printf("A medida da escada para alcançar sua ponta é de: %.2f metros\n", Mescada);
    
  return 0;
}
