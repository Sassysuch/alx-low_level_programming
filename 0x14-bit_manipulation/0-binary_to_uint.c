#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * unsigned long int : list of long unsigned
 * @b : characters b
 * Return : 0
 */

unsigned int binary_to_uint(const char *b) {
    unsigned int num = 0;
    int i = 0;

    if (b == NULL) {
        return 0;
    }

    while (b[i] != '\0') {
        if (b[i] != '0' && b[i] != '1') {
            return 0;
        }
        i++;
    }

    i = 0;
    while (b[i] != '\0') {
        num = num * 2 + (b[i] - '0');
        i++;
    }

    return num;
}

int main() {
    char binary[] = "1011";
    unsigned int decimal = binary_to_uint(binary);
    printf("Decimal: %u\n", decimal);

    return 0;
}
