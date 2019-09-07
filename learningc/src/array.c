#include <stdio.h>

int main(void)
{
  char c[4];
  printf("the size of c (mem): %zu\n", sizeof c);
  printf("the size of c (elements): %zu\n", sizeof c / sizeof c[0]);

  int i[4];
  printf("the size of i (mem): %zu\n", sizeof i);
  printf("the size of i (elements): %zu\n", sizeof i / sizeof i[0]);

  c[0] = 'A';
  c[1] = 0x42;
  c[2] = 67;

  printf("element 0: %c\n", c[0]);
  printf("element 1: %c\n", c[1]);
  printf("element 2: %c\n", c[2]);
  
  printf("element 0: %d\n", c[0]);
  printf("element 1: %d\n", c[1]);
  printf("element 2: %d\n", c[2]);

  printf("array address c in memory: %p\n", c);
  printf("array address &c in memory: %p\n", &c);
  printf("first element address in memory: %p\n", &c[0]);
  printf("next element address in memory: %p\n", &c[1]);
}
