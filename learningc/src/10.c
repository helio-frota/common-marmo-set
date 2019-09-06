#include <stdio.h>
#include <stdlib.h> // rand
#include <time.h>

#define AMOUNT 10

int main(void) {
    int n;
    for (size_t i = 0; i < AMOUNT; i++) {
        n = rand();
        printf("%d\n", n);
    }
    puts("-----------\n");
    long t = time(NULL);
    srand(t);
    for (size_t i = 0; i < AMOUNT; i++) {
        n = rand();
        printf("%d\n", n);
    }
    size_t AMOUNT2 = 10;
    puts("-----------\n");
    for (size_t i = 0; i < AMOUNT2; i++) {
        n = rand() % 10;
        printf("%d\n", n);
    }
    puts("-----------\n");
    for (size_t i = 0; i < AMOUNT2; i++) {
        n = rand() % 100;
        printf("%d\n", n);
    }
    puts("-----------\n");
    for (size_t i = 0; i < AMOUNT2; i++) {
        n = rand() % 1000;
        printf("%d\n", n);
    }
}
