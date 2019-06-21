#include <stdio.h>
#include <stdlib.h>

int main() {
    int character = 0, lines_count = 0;

    while((character = getchar()) != EOF) {
        if(character == '\n') {
            ++lines_count;
        }
    }
    printf("%d\n", lines_count);

    return 0;
}