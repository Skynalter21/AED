#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x, i , *a, soma;
  printf("Tamanho do vetor?\n");
  scanf("%d", &x);

  a = (int*)malloc(x *sizeof(int));

for(i = 0; i < x; i++) {
  a[i] = i+1; // incrementando vetor 

  if(a[i]%2 != 0 ){ // pegando numeros impares
     soma += a[i];  //somando numeros impares
  }
  printf("%d ", a[i]); //imprindo vetor
}

printf("\n Soma dos numeros impares do vetor : %d",soma);

free(a);
  return 0;
}