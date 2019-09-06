#include <stdio.h>
#include <string.h>

int main(void) {
    char foo[30];
    char bar[30];
    char foobar[60];
    puts("enter some foo string:");
    scanf("%[^\n]", foo);
    printf("foo string is: %s\n", foo);
    int flength = strlen(foo);
    printf("foo length is: %d\n", flength);
    strcpy(bar, foo);
    printf("bar is: %s\n", bar);
    strcat(foobar, foo);
    strcat(foobar, " ");
    strcat(foobar, bar);
    printf("foobar is: %s\n", foobar);
    int result = strcmp(foo, bar);
    if (result == 0) {
        puts("foo is the same as bar\n");
    }
    result = strcmp(bar, foobar);
    if (result <= 0) {
        puts("foobar is not the same as bar\n");
    }
}
