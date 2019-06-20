#include <stdio.h>
#include <stdlib.h>

int main() {
    double symbols_count = 0;

    for(; getchar() != EOF;  ++symbols_count);
    printf("%.0f\n", symbols_count);
    return 0;
}
