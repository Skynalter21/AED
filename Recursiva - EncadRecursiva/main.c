#include <stdio.h>
#include <stdlib.h>
#include "recursiva.h"

int main(void) {
  int a;
  Lista *lst;
  lst = cria_lista();
  inser_ord(&lst, 2);
  inser_ord(&lst, 3);
  inser_ord(&lst, 1);
  imprime_rec(lst);

  Lista *um = get_nod(lst, 2);
  printf("\nAchei %d\n\n", um->info);

  imprime_rec(lst);

  int ret = retira_rec(&lst, 2);
  printf("\nRet %d\n", ret);
  imprime_rec(lst);

  libera_rec(&lst);

  if (lst == NULL) {
    printf("\nLimado!!!\n");
  }

  return 0;
}