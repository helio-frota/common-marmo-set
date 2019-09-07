#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdint.h>

int main(void)
{
  char c;

  printf("size of c: %zu\n", sizeof c);

  printf("size of char: %zu byte(s) / %zu bits\n", sizeof(char), sizeof(char) * 8);

  // base=2
  // 11111111
  // 255
  c = 255;
  printf("the value of c: %i\n", c); // -1

  c = 10;
  c = 0xa;
  c = '\n';

  // base=2
  // 01111111
  // 127
  unsigned char cc;
  cc = 127;
  printf("the value of cc: %i\n", cc);

  bool b;
  b = true;
  b = false;
  printf("size of bool: %zu\n", sizeof b);
  printf("the value of b: %i\n", b);

  int i = INT_MAX;
  printf("size of i (int): %zu bytes / %zu bits\n", sizeof i, sizeof i * 8);
  printf("the value of i: %d\n", i);
  i++;
  printf("the value of i: %d\n", i);

  unsigned int ii = UINT_MAX;
  printf("the value of ii: %u\n", ii);

  uint32_t iii = UINT_MAX;
  printf("the value of iii: %u\n", iii);
  uint16_t iiii = USHRT_MAX;
  printf("the value of iiii: %u\n", iiii);
  uint8_t iiiii = UCHAR_MAX;
  printf("the value of iiiii: %u\n", iiiii);

  long j = LONG_MAX;
  printf("the value of j: %lu\n", j);
  long long jj = LLONG_MAX;
  printf("the value of jj: %llu\n", jj);

  register int r = 0;
  printf("the value of r: %d\n", r);

  float f = 1;
  printf("size of f (float) %zu bytes / %zu bits\n", sizeof f, sizeof f * 8);
  printf("the value of f: %.2f\n", f);

  double d = 1;
  printf("size of d (double) %zu bytes / %zu bits\n", sizeof d, sizeof d * 8);

  long double ld = 1;
  printf("size of ld (long double) %zu bytes / %zu bits\n", sizeof ld, sizeof ld * 8);

  enum direction
  {
    up,
    down,
    left = 10,
    right
  };

  printf("up: %d\n", up);
  printf("down: %d\n", down);
  printf("left: %d\n", left);
  printf("right: %d\n", right);
}
