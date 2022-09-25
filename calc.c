#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  double soma = 0.0;
  int i;
  
    for (i = 1; i < argc; i++) soma += atof(argv[i]);
      printf("%2.f\n", soma);
}

