#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i, j, n, m, diagonalTam, sum = 0;
  int **mtz;

printf("tamanha da matriz I por J\n");
  scanf("%d %d", &n, &m);

  mtz = (int **) malloc(n * sizeof(int *));

  for (i = 0; i < n; i++) {
    mtz[i] = (int *) malloc(m * sizeof(int));
    for (j = 0; j < m; j++) {
      scanf("%d", &mtz[i][j]);
    }
  }

  diagonalTam = (n < m) ? n : m;

  for (i = 0; i < diagonalTam; i++) {
    printf("%d ", mtz[i][i]);
    free(mtz[i]);
  }

  printf("\n");

  free(mtz);
  
  system("pause");
  return 0;
}