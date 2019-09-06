#include <stdio.h>
#include <string.h>

struct item {
  unsigned char id;
  unsigned int number;
};

union element {
  unsigned char id;
  unsigned int number;
};

struct st2 {
  int a;
  int b;
  int c;
};

struct st {
  int code;
  struct st2 s2;
};

int main(void) {
  struct item i;
  i.id = 2;
  i.number = 900;

  printf("id: %d\n", i.id);
  printf("number: %d\n", i.number);

  printf("sizeof(struct item): %lu\n", sizeof(struct item));

  struct item z[2];

  memset(&z, 0, sizeof(struct item));

  z[0].id = 1;
  z[0].number = 200;

  z[1].id = 2;
  z[1].number = 300;

  union element e;
  e.id = 5;
  e.number = 150;
  printf("id: %d\n", e.id);
  printf("number: %d\n", e.number);
  
  printf("sizeof(union element): %lu\n", sizeof(union element));

}
