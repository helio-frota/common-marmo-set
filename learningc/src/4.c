#include <stdio.h>

int main(void) 
{
  int x = 2; // 10
  int y = 3; // 11
             // 10
  printf("result: %d\n", x & y);
  
  int z = 2; // 10
  int k = 3; // 11
             // 11
  printf("result: %d\n", z | k);

  int w = 2; // 10
  int j = 3; // 11
             // 01
  printf("result: %d\n", w ^ j);

  int a = 0;
  printf("result: %d\n", !a);
  printf("result: %d\n", ~a);

  int b = 0b1000; // 8
  printf("result: %d\n", b << 1);
  printf("result: %d\n", b << 2);
  printf("result: %d\n", b << 3);
  printf("result: %d\n", b >> 1);

}
