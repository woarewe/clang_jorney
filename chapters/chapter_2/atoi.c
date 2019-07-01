#include <stdio.h>
#include <stdlib.h>

int atoi(const char *s) {
    int number = 0;
    for(int i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        number = number * 10 + (s[i] - '0');
    return number;
}

int main() {
    printf("%d\n", atoi("12345"));
    printf("%d\n", atoi("asf"));
    printf("%d\n", atoi("12sadf34"));
    return 0;
}
