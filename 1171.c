#include <stdio.h>

void Sort(int arr[], int tam) {
  int aux = 0, atual = 0, prox = 0;

  for(atual = 0; atual < tam; atual++) {
    for(prox = 0; prox < tam; prox++) {
      if(arr[prox] > arr[prox+1]){
        aux = arr[prox];
        arr[prox] = arr[prox + 1];
        arr[prox + 1] = aux;
      }
    }
  }
}

int main() {
  int i, j, vezes;

  scanf("%i", &vezes);
  int numeros[vezes];
  int numerosNaoRep[vezes];

  for(i = 0; i < vezes; i++) {
    scanf("%d", &numeros[i]);
  }

  Sort(numeros, i);

  int n = 0;

  for(i = 0; i < vezes; i++) {
    numerosNaoRep[i] = -1;
  }

  for(i = 0; i < vezes; i++) {
    for(j = 0; j < n; j++) {
      if(numeros[i] == numerosNaoRep[j]) break;
    }

    if(n == j) {
      numerosNaoRep[n] = numeros[i];
      n++;
    }
  }


  int numerosDiferentes = 0;
  j = 0;

  while(numerosNaoRep[j] >= 0) {
    numerosDiferentes++;
    j++;
  }

  int vezesRepitidas[numerosDiferentes];

  for(j = 0; j < numerosDiferentes; j++) {
    vezesRepitidas[j] = 0;
  }

  j = 0;
  while(numerosNaoRep[j] >= 0) {
    for(i = 0; i < vezes; i++) {
      if(numerosNaoRep[j] == numeros[i]) vezesRepitidas[j]++;
    }
    j++;
  }

  for(i = 0; i < numerosDiferentes; i++) {
    printf("%i aparece %i vez(es)\n", numerosNaoRep[i] ,vezesRepitidas[i]);
  }
}