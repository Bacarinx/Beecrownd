#include <stdio.h>

int Sort(int arr[], int size) {
  int aux, i = 0, j = 0, result = 0;

  for(i = 1; i < size; i++) {
    for(j = 0; j < size - 1; j++) {
      if(arr[j] > arr[j + 1]) {
        aux = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = aux;
        result++;
      }
    }
  }

  return result;
}

int main() {
  int vezes, i, j;

  scanf("%d", &vezes);

  for (i = 0; i < vezes; i++) {
    int trens;
    scanf("%i", &trens);
    
    int valores[trens];

    for(j = 0; j < trens; j++) {
      scanf("%d", &valores[j]);
    }

    int result = Sort(valores, trens);
     printf("Optimal train swapping takes %i swaps.\n", result);
  }
}