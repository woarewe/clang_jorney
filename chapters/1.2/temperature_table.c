#include <stdio.h>

int fahrenheit_to_celsius(int *fahrenheit_pointer) {
    return 5 * (*fahrenheit_pointer - 32) / 9;
}

int main() {
    int fahrenheit, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahrenheit = lower;
    while(fahrenheit <= upper) {
        printf("%3d %6d\n", fahrenheit, fahrenheit_to_celsius(&fahrenheit));
        fahrenheit += step;
    }

    return 0;
}
