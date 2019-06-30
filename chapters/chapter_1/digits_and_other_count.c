#include <stdio.h>
#include <stdlib.h>

#define SPACE ' '
#define NEW_LINE '\n'
#define TAB '\t'

int main() {
    int character, i, white_count, other_count;
    int digits_count[10];

    white_count = other_count = 0;
    for(i = 0; i < 10; ++i)
        digits_count[i] = 0;

    while((character = getchar()) != EOF)
        if(character >= '0' && character <= '9')
            ++digits_count[character - '0'];
        else if(character == SPACE || character == SPACE || character == NEW_LINE)
            ++white_count;
        else
            ++other_count;

    for(i = 0; i < 10; ++i)
        printf("%c: %d\n", '0' + i, digits_count[i]);

    printf("whitespaces: %d\n", white_count);
    printf("other: %d\n", other_count);
    return 0;
}
