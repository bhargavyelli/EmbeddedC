#include <stdio.h>
#include <stdint.h>

void multiplyBy9() {
    int n = 7;
    int result = (n << 3) + n;
    printf("Result of %d multiplied by 9 is %d\n", n, result);
}

void sizeOfIntInBits() {
    unsigned int x = 5;
    int bits = 0;
    while (x) {
        bits++;
        x >>= 1;
    }
    printf("Size of int is %d bits\n", bits);
}

uint32_t littleToBigEndian(uint32_t val) {
    return ((val >> 24) & 0x000000FF) |
           ((val >> 8)  & 0x0000FF00) |
           ((val << 8)  & 0x00FF0000) |
           ((val << 24) & 0xFF000000);
}

void endianConversion() {
    uint32_t little = 0x12345678;
    uint32_t big = littleToBigEndian(little);
    printf("Little Endian: 0x%X\n", little);
    printf("Big Endian: 0x%X\n", big);
}

int main() {
    multiplyBy9();
    sizeOfIntInBits();
    endianConversion();
    return 0;
}
