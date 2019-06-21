#include <stdio.h>
#include <stdlib.h>

#define SPACE ' '
#define NEW_LINE '\n'
#define TAB '\t'

int main() {
    int character, new_lines_count, tabs_count, spaces_count;
    character = new_lines_count = tabs_count = spaces_count = 0;

    while((character = getchar()) != EOF) {
        switch(character) {
            case SPACE:
                ++spaces_count;
                break;
            case TAB:
                ++tabs_count;
                break;
            case NEW_LINE:
                ++new_lines_count;
                break;
        }
    }

    printf("New lines count: %d\n", new_lines_count);
    printf("Tabs count: %d\n", tabs_count);
    printf("Spaces count: %d\n", spaces_count);

    return 0;
}
