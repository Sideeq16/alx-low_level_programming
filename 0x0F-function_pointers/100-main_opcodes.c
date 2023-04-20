#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i;
	int num_bytes;
    unsigned char *ptr = (unsigned char *)main;

    if (argc != 2) {
        printf("Error\n");
        return 1;
    }
    num_bytes = atoi(argv[1]);
    if (num_bytes < 0) {
        printf("Error\n");
        return 2;
    }
    for (i = 0; i < num_bytes; i++) {
        printf("%x", *(ptr + i));
    }
    printf("\n");
    return 0;
}
