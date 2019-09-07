#include <stdio.h>

void printa(char *s)
{
  while(*s != '\0')
    putchar(*s++);
}

int main(void)
{
  int a[] = {10, 20, 30};

  for (int i = 0; i < 3; i++) {
    printf("element at (i): %d\n", a[i]);
    printf("next element: %d\n", *(a + i));
    printf("array memory address: %p\n", a);
    printf("first value: %d\n", *a);
    printf("second: %d\n", *(a + 1));
    puts("----------");
  }


  int i = 2019;
  int *p;
  p = &i;

  printf("mem address of i: %p\n", &i);
  printf("mem address of i: %p\n", p);
  printf("value of i: %d\n", i);
  printf("value of i: %d\n", *p);

  char f[] = "foo";
  char *b = "bar";
  puts(f);
  puts(b);

  // array of bytes:
  char z[] = "bar";
  char *t = "bar";
  char k[] = {0x62, 0x61, 0x72, 0x00};

  puts(z);
  puts(t);
  puts(k);
  printa(k);
  puts("");

  t++;
  putchar(*t);
  puts("");
  t++;
  putchar(*t);
  puts("");

}
