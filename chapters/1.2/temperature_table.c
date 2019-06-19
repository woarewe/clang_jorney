#include <stdio.h>
#include <stdlib.h>

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
    float fahrenheit;
    int lower, upper, step;
    char *delimiter_string = table_row_delimiter(23);

    lower = 0;
    upper = 300;
    step = 20;

    printf("|%s|\n", delimiter_string);
    printf("|%10s | %10s|\n", "Celsius", "Fahrenheit");
    printf("|%s|\n", delimiter_string);

    fahrenheit = lower;
    while(fahrenheit <= upper) {
        printf("|%10.0f | %10.1f|\n", fahrenheit, fahrenheit_to_celsius(&fahrenheit));
        printf("|%s|\n", delimiter_string);
        fahrenheit += step;
    }

    free(delimiter_string);
    return 0;
}
