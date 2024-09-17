#include <stdio.h>
#include <string.h>

int main() {
  char frase[201];
  int vezes, i, j, letras[26];
  int indexs[26];

  scanf("%d", &vezes);
  getchar();

  for(i = 0; i < vezes; i++) {
    
    fgets(frase, 201, stdin);

    for(j = 0; j < 26; j++) {
      letras[j] = 0;
      indexs[j] = -1;
    }

    for(j = 0; j < strlen(frase); j++) {
      int posicao = tolower(frase[j]) - 97;
      if(posicao >= 0 && posicao <= 25) {
        letras[posicao]++;
      }
    }

    int indexBiggest = 0;

    for(j = 0; j < 26; j++) {
      if(letras[j] > indexBiggest){
        indexBiggest = letras[j];
      } 
    }

    int k = 0;
    for(j = 0; j < 26; j++) {
      if(letras[j] == indexBiggest) {
        indexs[k] = j;
        k++;
      }
    }

    j = 0;
    while(indexs[j] >= 0) {
      printf("%c", 97 + indexs[j]);
      j++;
    }

    printf("\n");
  }
  return 0;
}