#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

int main()
{

float x,y;
printf("X do primeiro ponto:\n");
scanf("%f",&x);
printf("Y do primeiro ponto:\n");
scanf("%f",&y);

Ponto*p1 =  pto_cria(x,y);

printf("X do segundo ponto:\n");
scanf("%f",&x);
printf("Y do segundo ponto:\n");
scanf("%f",&y);

Ponto*p2 =  pto_cria(x,y);

float d = pto_distancia (p1,p2);

printf("Distancia entre pontos: %.1f\n",d);
pto_libera(p1);
pto_libera(p2);
return 0;
}
