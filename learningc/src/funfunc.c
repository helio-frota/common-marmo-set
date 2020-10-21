#include <stdio.h>

int sum(int a, int b);

int main(void) {
  int a;
  int b;
  puts("enter the first number: ");
  scanf("%d", &a);
  puts("enter the second number: ");
  scanf("%d", &b);
  int result = sum(a, b);
  printf("the result is: %d\n", result);
}

int sum(int a, int b) {
  return a + b;
}
