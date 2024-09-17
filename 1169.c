#include <stdio.h>
#include <math.h>
int main() {
  int i, j, vezes, graos;
  double totalGraos, gramas, kilos;
  scanf("%d", &vezes);

  for(i = 0; i < vezes; i++) {
    totalGraos = 1;
    scanf("%d", &graos);
    for(j = 0; j < graos; j++) {
      totalGraos *= 2;
    }
    
    gramas = totalGraos / 12;
    kilos = floor(gramas / 1000);
    printf("%.0lf kg\n", kilos);
  }
}