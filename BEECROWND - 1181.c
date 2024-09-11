#include <stdio.h>
#include <string.h>

void main() {
    char word[20], caracter;
    int i, qtvogais;

    printf("Digite uma palavra:\n");
    fgets(word, 19, stdin);

    printf("Digite um caracter:\n");
    scanf(" %c", &caracter);

    qtvogais = Vogais(word);
    printf("%i\n", qtvogais);

    changeVogais(word, caracter);
}

int Vogais(char palavra[]) {
    int vogais = 0, i = 0;

    for(i = 0; i < strlen(palavra); i++) {
        if(toupper(palavra[i]) == 'A' || toupper(palavra[i]) == 'E' || toupper(palavra[i]) == 'I' || toupper(palavra[i]) == 'O' || toupper(palavra[i]) == 'U') {
            vogais++;
        }
    }

    return vogais;
}

void changeVogais(char palavra[], char caracter) {
    int i;
    char newWord[strlen(palavra)];

    for(i = 0; i < strlen(palavra); i++) {
        if(toupper(palavra[i]) == 'A' || toupper(palavra[i]) == 'E' || toupper(palavra[i]) == 'I' || toupper(palavra[i]) == 'O' || toupper(palavra[i]) == 'U') {
            newWord[i] = caracter;
        } else {
            newWord[i] = palavra[i];
        }
    }

    newWord[i] = '\0';
    printf("%s", newWord);
}
