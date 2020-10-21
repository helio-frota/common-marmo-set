#include <stdio.h>

#define N 2

int main(void) {
  char s[30] = "bar";

  for (int i = 0; i < 30; i++) printf("%x", s[i]);

  putchar('\n');

  for (int i = 0; i < 40; i++) printf("%x", s[i]);

  putchar('\n');

  int k[N][N] = {0};
  int i, j;

  k[0][0] = 2;
  k[0][1] = 3;
  k[1][0] = 4;
  k[1][1] = 5;

  // ^^^^ *(*(k+1)+1) = 5;

  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      printf("[%d][%d]=%d ", i, j, k[i][j]);
      if (j == N - 1) putchar('\n');
    }
  }
}
