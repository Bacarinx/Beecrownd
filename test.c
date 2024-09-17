#include <stdio.h>

int main() {
  int i;
  char str[10];

  getchar;
  for(i = 0; i < 3; i++) {
    fgets(str, 10, stdin);
    printf("%s", str);
  }
  
}