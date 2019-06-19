#include <stdio.h>

float fahrenheit_to_celsius(float *fahrenheit_pointer) {
    return (5.0 / 9.0) * (*fahrenheit_pointer - 32.0);
}

int main() {
    float fahrenheit;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahrenheit = lower;
    while(fahrenheit <= upper) {
        printf("%3.0f %6.1f\n", fahrenheit, fahrenheit_to_celsius(&fahrenheit));
        fahrenheit += step;
    }

    return 0;
}
