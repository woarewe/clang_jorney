#include <stdio.h>
#include <stdlib.h>

#define LOWER 0.0
#define UPPER 300.0
#define STEP 20.0

float fahrenheit_to_celsius(float *fahrenheit_pointer) {
    return (5.0 / 9.0) * (*fahrenheit_pointer - 32.0);
}

char *table_row_delimiter(short row_length) {
    char *string = calloc(row_length, sizeof(char));
    char delimiter_symbol = '_';

    for(short i = 0; i < row_length; ++i) {
        *(string + i * sizeof(char)) = delimiter_symbol;
    }
    return string;
}

int main() {
    char *delimiter_string = table_row_delimiter(23);

    printf("|%s|\n", delimiter_string);
    printf("|%10s | %10s|\n", "Celsius", "Fahrenheit");
    printf("|%s|\n", delimiter_string);

    for (float fahrenheit = UPPER; fahrenheit >= LOWER; fahrenheit = fahrenheit - STEP) {
        printf("|%10.0f | %10.1f|\n", fahrenheit, fahrenheit_to_celsius(&fahrenheit));
        printf("|%s|\n", delimiter_string);
    }

    free(delimiter_string);
    return 0;
}
