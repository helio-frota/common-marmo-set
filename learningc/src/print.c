#include <stdio.h>

int main(void) {
  unsigned short length = printf("123456789\n");

  puts("Decimal:");
  printf("%d - %d - %d - %d\n", length, 10, 0xa, 'A');

  puts("Hexadecimal:");
  printf("%x - %x - %x - %x\n", length, 10, 0xa, 'A');

  printf("----------\n");
  puts("Add new line using character format %c, 10");
  printf("----------");
  printf("%c", 10);
  printf("----------\n");

  puts("123456789");
  printf("%s\n", "123456789");

  // man 3 printf for more information.
}
