#include <stdio.h>

#define DOUBLE(x) (x + x)
#define MAX(x,y) (x > y ? x : y)
#define MAX3(x,y,z) (MAX(MAX(x,y), MAX(y,z)))

#define DEBUG 1

#define VAR(x) printf("variable "#x" has value: %d\n", x);

int main(void) {
  int counter = 89;
  printf("%d\n", DOUBLE(8));
  printf("%d\n", MAX(3,9));
  printf("%d\n", MAX3(3,6,9));
  printf("%d\n", __LINE__);

#ifdef DEBUG
  printf("line number: %d\n", __LINE__);
  VAR(counter);
#endif

}
