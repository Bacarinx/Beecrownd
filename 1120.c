#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
  char caracter, string[101], string2[101];
  int compare = 0;

  while(scanf(" %c %s", &caracter, string) != EOF) {
    if (caracter == '0' && (strcmp(string, "0") == 0)) break;
    
    int i, j = 0;
    
    for(i = 0; i < strlen(string); i++) {
      if(string[i] != caracter) {
        string2[j] = string[i];
        j++;
      }
    }

    string2[j] = '\0';

    while(string2[0] == '0') {
      for(i = 0; i < strlen(string2) - 1; i++) {
        string2[i] = string2[i + 1];
      } 
      string2[i] = '\0';
    }

    for(i = 0; i < strlen(string2); i++) {
      if(caracter == string2[i]) {
        i = strlen(string2) + 1;
        compare = 1;
      }
    }

    if(string2[0] == '\0' || compare == 1) {
      printf("0\n");
    } else {
      printf("%s\n", string2);
    }
  }
  return 0;
}