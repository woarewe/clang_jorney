#include <stdlib.h>
#include <stdio.h>

#define SPACE ' '
#define ENABLED_STATE 1
#define DISABLED_STATE 0

int main() {
    int character;
    int flag = DISABLED_STATE;

    while((character = getchar()) != EOF) {
       if(character == SPACE) {
            if(flag == ENABLED_STATE) {
                continue;
            } else {
                flag = ENABLED_STATE;
                putchar(SPACE);
            }
       } else {
           flag = DISABLED_STATE;
           putchar(character);
       }
    }

    return 0;
}
