#include <stdio.h>

#define MAX_TEMP 30  


void compareTemperature(int temp) {
    static int count = 0;
    if (temp > MAX_TEMP) {
        count++;
    }
    printf("Temperature: %d°C\n", temp);
    printf("Times temperature exceeded the limit: %d\n", count);
}

int main() {
    int temps[] = {28, 32, 34, 29, 33};
    int size = sizeof(temps) / sizeof(temps[0]);

    for (int i = 0; i < size; i++) {
        compareTemperature(temps[i]);
    }

    return 0;
}
