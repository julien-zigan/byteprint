/* provides functions to print raw bytes to the console */

#include <stdio.h>

typedef unsigned char byte;

/* prints a byte as an unsigned integer in hexadecimal notation
 * with most significant bit first (MSB) */
void printByteAsHexMSB(byte b) {
    printf("%02X", b);
}

/* prints a byte as an unsigned integer in hexadecimal notation
 * with least significant bit first (LSB) */
void printByteAsHexLSB(byte b) {
    b ^= 0b11111111;
    printf("%02X", b);
}

/* helper function for printByteAsBinaryMSB(byte b) */
void printByteAsBinaryMSBimpl(const byte b, int counter) {
    if (b / 2 == 0) {
        for (int i = 0; i < counter; i++) {
            printf("0");
        }
        printf("%d", b % 2);
        return;
    }
    else {
        printByteAsBinaryMSBimpl(b / 2, --counter);
    }
    printf("%d", b % 2);
}

/* prints a byte as an unsigned integer in binary notation
 * with the most significant first (MSB) */
void printByteAsBinaryMSB(byte b) {
    printByteAsBinaryMSBimpl(b, 7);
}
/* prints a byte as an unsigned integer in binary notation
 * with the least significant first (LSB) */
void printByteAsBinaryLSB(byte b) {
    int counter = 7;
    while (b / 2 != 0) {
        printf("%d", b % 2);
        b /= 2;
        counter--;
    }
    printf("%d", b % 2);
    for (int i = 0; i < counter; i++) {
        printf("0");
    }
}
