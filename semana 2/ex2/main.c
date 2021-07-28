#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int bool;

char * newString(int n);
bool isvogal(char c);

int main(void) {
  int i, n, sum = 0;
  char * str;

printf("Digite uma string\n");
  scanf("%d", &n); // recebe string do teclado

  str = newString(n); // passa string para alocaao de memoria correspondente a quantidade de letras.
  scanf("%s", str); // recebe string alocada.

  for (i = 0; str[i]; i++) {
    if (!isvogal(str[i])) {  // verifica as vogais
      printf("%c", str[i]);
    }
  }

  printf("\n");

  free(str);
  
  system("pause");
  return 0;
}

char * newString(int n)
{
  char * string;

  string = (char *) malloc(n + 1); // +1 /0

  return string;
}

bool isvogal(char c)
{
  return (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u');
}