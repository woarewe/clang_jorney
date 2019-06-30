#include <stdio.h>
#include <stdlib.h>

int power(int base, int power) {
    int acc = 1;
    for(int i = 0; i < power; ++i)
        acc = acc * base;
    return acc;
}

int main() {
    for(int i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2, i), power(-3, i));

    return 0;
}
