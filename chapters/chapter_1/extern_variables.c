#include <stdio.h>
#include <stdlib.h>

int count = 0;

void increment() {
    extern int count;
    ++count;
}

int main() {
    extern int count;
    increment();
    printf("%d\n", count);
    ++count;
    increment();
    printf("%d\n", count);
    return 0;
}
