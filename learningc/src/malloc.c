#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MALLOC(ptr, size)                       \
  {                                             \
    ptr = malloc(size);                         \
    if (ptr == NULL)                            \
    {                                           \
      fprintf(stderr, "no memory available\n"); \
      exit(1);                                  \
    }                                           \
  }

void *malloc_s(size_t size)
{
  void *p;
  p = malloc(size);
  if (p == NULL)
  {
    fprintf(stderr, "no memory available\n");
    exit(1);
  }
  return p;
}

int main(void)
{
  int *p = NULL;

  // malloc_s(sizeof(int));
  MALLOC(p, 2 * sizeof(int));

  // initializes the memory with 0.
  memset(p, 0, 2 * sizeof(int));

  *(p + 0) = 9;
  *(p + 1) = 89;

  printf("%d\n", *p);

  p = realloc(p, sizeof(int) * 3);
  *(p + 2) = 98;

  free(p);
}
