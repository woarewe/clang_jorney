#include <stdio.h>
#include <stdlib.h>

#define IN 1
#define OUT 0

int main() {
    int current_character, new_lines_count, words_count, characters_count, state;
    new_lines_count = words_count = characters_count = 0;
    state = OUT;

    while((current_character = getchar()) != EOF) {
        ++characters_count;
        if(current_character == '\n')
            ++new_lines_count;
        if(current_character == ' ' || current_character == '\t' || current_character == '\n')
            state = OUT;
        else if(state == OUT) {
            ++words_count;
            state = IN;
        }
    }

    printf("%d, %d, %d\n", characters_count, new_lines_count, words_count);
    return 0;
}
