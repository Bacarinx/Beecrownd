#include <stdio.h>
#include <string.h>

int main() {
  int testes, qtdPalavras, i, j, k;
  scanf("%i", &testes);

  int result;
  char results[testes][20];

  for(i = 0; i < testes; i++) {
    scanf("%i", &qtdPalavras);
    char words[qtdPalavras][20];

    for(j = 0; j < qtdPalavras; j++) {
      scanf("%s", words[j]);
    }
    result = 0;

    for(j = 0; j < qtdPalavras - 1; j++) {
      if(strcmp(words[j], words[j + 1]) == 0) 
        result++;
    }

    if(result == qtdPalavras - 1) {
      for(k = 0; k < strlen(words[0]); k++) {
        results[i][k] = words[0][k];
      }
      results[i][k] = '\0';
    } else {
      results[i][0] = 'i';
      results[i][1] = 'n';
      results[i][2] = 'g';
      results[i][3] = 'l';
      results[i][4] = 'e';
      results[i][5] = 's';
      results[i][6] = '\0';
    }
  }

  for (i = 0; i < testes; i++) {
    printf("%s\n", results[i]);
  }

  return 0;
}