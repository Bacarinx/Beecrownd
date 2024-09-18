#include <stdio.h>
#include <string.h>
#include <ctype.h>

int Potencia(int expo) {
  int i, resultado = 1;

  for(i = 0; i < expo; i++) {
    resultado *= 10;
  }

  return resultado;
}

int main() {
  int i, vezes, j, indexs[6],  numero1, numero2, numero3, unidade1, unidade2, unidade3;
  char string[15];

  scanf("%d", &vezes);

  for(i = 0; i < vezes; i++) {
    scanf("%s", string);

    int k = 0;

    for(j = 0; j < strlen(string); j++) {
      if(isdigit(string[j]) == 1) {
        indexs[k] = j;
        while(isdigit(string[j]) == 1) {
          j++;
        }
        k++;
        indexs[k] = j-1;
        k++;
      }   
    }

  unidade1 = indexs[1] - indexs[0];
  unidade2 = indexs[3] - indexs[2];
  unidade3 = indexs[5] - indexs[4];

  numero1 = 0;
  numero2 = 0;
  numero3 = 0;

  for(j = indexs[0]; j <= indexs[1]; j++){
    numero1 += (string[j] - '0') * Potencia(unidade1);
    unidade1--;
  }

  for(j = indexs[2]; j <= indexs[3]; j++){
    numero2 += (string[j] - '0') * Potencia(unidade2);
    unidade2--;
  }

  for(j = indexs[4]; j <= indexs[5]; j++){
    numero3 += (string[j] - '0') * Potencia(unidade3);
    unidade3--;
  }

  int result = numero1 + numero2 + numero3;
    printf("%d\n", result);
  }

  return 0;
}