#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fptr;
  fptr = fopen("filename.txt", "r");
  if (fptr == NULL) {
    printf("The file failed to open");
  }
  return 0;
}
