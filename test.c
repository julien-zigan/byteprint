
#include <stdlib.h>

#include "byteprint.h"

int main(void) {
    byte binary = 0b10001111;
    byte hex = 0XAC;

    printf("Byte in binary notation most significant bit first (MSB): "),
    printByteAsBinaryMSB(binary);
    printf("\n");
    printf("Byte in binary notation least significant bit first (LSB): ");
    printByteAsBinaryLSB(binary);
    printf("\n");
    printf("Byte in hexadecimal notation most significant bit first (MSB): ");
    printByteAsHexMSB(hex);
    printf("\n");
    printf("Byte in hexadecimal noation least significant bit first (LSB): ");
    printByteAsHexLSB(hex);
    printf("\n");

    return EXIT_SUCCESS;
}
