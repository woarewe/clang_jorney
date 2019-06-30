#include <stdio.h>
#include <stdlib.h>

int main() {
    int character, new_lines_count = 0;
    while((character = getchar()) != EOF)
        if(character == '\n')
            ++new_lines_count;

    printf("%d\n", new_lines_count);
    return 0;
}
