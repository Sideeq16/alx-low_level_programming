#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int num_bytes) {
  unsigned char* ptr = (unsigned char*) &print_opcodes;
  for (int i = 0; i < num_bytes; i++) {
    printf("%02x ", *ptr++);
  }
  printf("\n");
}

int main(int argc, char** argv) {
  if (argc < 2) {
    printf("Usage: ./main number_of_bytes\n");
    return 1;
  }
  int num_bytes = atoi(argv[1]);
  print_opcodes(num_bytes);
  return 0;
}
