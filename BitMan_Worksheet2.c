#include <stdio.h>

int checkLSB(int num) {
    return num & 1;
}

int checkMSB(int num) {
    return (num & (1 << 31));
}

int getNthBit(int num, int n) {
    return (num >> n) & 1;
}

int setNthBit(int num, int n) {
    return num | (1 << n);
}

int clearNthBit(int num, int n) {
    return num & ~(1 << n);
}

int toggleNthBit(int num, int n) {
    return num ^ (1 << n);
}

int highestSetBit(int num) {
    int pos = -1;
    for(int i = 31; i >= 0; i--)
        if(num & (1 << i)) {
            pos = i;
            break;
        }
    return pos;
}

int lowestSetBit(int num) {
    int pos = -1;
    for(int i = 0; i < 32; i++)
        if(num & (1 << i)) {
            pos = i;
            break;
        }
    return pos;
}

int countTrailingZeros(int num) {
    int count = 0;
    for(int i = 0; i < 32; i++) {
        if(num & (1 << i)) break;
        count++;
    }
    return count;
}

int countLeadingZeros(int num) {
    int count = 0;
    for(int i = 31; i >= 0; i--) {
        if(num & (1 << i)) break;
        count++;
    }
    return count;
}

int flipBits(int num) {
    return ~num;
}

void countZerosOnes(int num, int *zeros, int *ones) {
    *zeros = *ones = 0;
    for(int i = 0; i < 8; i++) {
        if(num & (1 << i)) (*ones)++;
        else (*zeros)++;
    }
}

unsigned int rotateLeft(unsigned int num, int n) {
    return (num << n) | (num >> (32 - n));
}

unsigned int rotateRight(unsigned int num, int n) {
    return (num >> n) | (num << (32 - n));
}

void decimalToBinary(int num) {
    int started = 0;
    for(int i = 31; i >= 0; i--) {
        if(num & (1 << i)) {
            printf("1");
            started = 1;
        } else if(started) printf("0");
    }
    if(!started) printf("0");
    printf("\n");
}

void swapNumbers(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void evenOdd(int num) {
    if(num & 1) printf("%d is odd\n", num);
    else printf("%d is even\n", num);
}

int main() {
    int num, bit, a, b, zeros, ones, n;
    char dir;

    num = 5;
    printf("LSB of %d is %d\n", num, checkLSB(num));

    num = 128;
    printf("MSB of %d is %d\n", num, checkMSB(num));

    num = 10; bit = 2;
    printf("Bit %d of %d is %d\n", bit, num, getNthBit(num, bit));

    num = 10; bit = 1;
    printf("Number after setting bit %d: %d\n", bit, setNthBit(num, bit));

    num = 8; bit = 0;
    printf("Number after setting bit %d: %d\n", bit, setNthBit(num, bit));

    num = 10; bit = 3;
    printf("Number after clearing bit %d: %d\n", bit, clearNthBit(num, bit));

    num = 10; bit = 1;
    printf("Number after toggling bit %d: %d\n", bit, toggleNthBit(num, bit));

    num = 18;
    printf("Highest set bit of %d is at position %d\n", num, highestSetBit(num));

    num = 18;
    printf("Lowest set bit of %d is at position %d\n", num, lowestSetBit(num));

    num = 40;
    printf("Number of trailing zeros: %d\n", countTrailingZeros(num));

    num = 16;
    printf("Number of leading zeros: %d\n", countLeadingZeros(num));

    num = 5;
    printf("Flipped bits: %d\n", flipBits(num));

    num = 15;
    countZerosOnes(num, &zeros, &ones);
    printf("Number of ones: %d, Number of zeros: %d\n", ones, zeros);

    num = 16; n = 2;
    printf("Rotate left by %d: %u\n", n, rotateLeft(num, n));

    num = 16; n = 2;
    printf("Rotate right by %d: %u\n", n, rotateRight(num, n));

    num = 13;
    printf("Binary representation of %d: ", num);
    decimalToBinary(num);

    a = 5; b = 9;
    swapNumbers(&a, &b);
    printf("After swapping: a=%d, b=%d\n", a, b);

    num = 7;
    evenOdd(num);

    return 0;
}
