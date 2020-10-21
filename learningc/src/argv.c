#include <stdio.h>

// "The program name will be stored in the first item in argv,
// followed by each of the parameters.
// Hence, if the program name is followed by n parameters there
// will be n + 1 entries in argv, ranging from argv[0] to argv[n].
// Furthermore, argc will be automatically set equal to n + 1."
// source: http://farside.ph.utexas.edu/teaching/329/lectures/node23.html
//
// argc: the number of arguments passed to the main
// argv: an array as a sequencial list of strings
int main(int argc, char** argv) {
  for (int i = 0; i < argc; i++) {
    printf("n=%d | %d --> %s\n", argc, i, argv[i]);
  }
}

// 00:26 $ ./build/arguments
// n=1 | 0 --> ./build/arguments
// 00:26 $ ./build/arguments foo
// n=2 | 0 --> ./build/arguments
// n=2 | 1 --> foo
// 00:26 $ ./build/arguments foo bar
// n=3 | 0 --> ./build/arguments
// n=3 | 1 --> foo
// n=3 | 2 --> bar
// 00:26 $ ./build/arguments foo bar test
// n=4 | 0 --> ./build/arguments
// n=4 | 1 --> foo
// n=4 | 2 --> bar
// n=4 | 3 --> test
