#include <stdlib.h>
#include <stdio.h>
#include "urldecode.h"

int main(int argc, char *argv[]) {
  if (argc < 2) {
	  printf("no argument given\n");
	  return 1;
  }
  char *str = urlDecode(argv[1]);
  printf("%s\n", str);
  free(str);
  return 0;
}
