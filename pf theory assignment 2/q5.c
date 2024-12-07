#include <stdio.h>

void printHorizontalHistogram(int values[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Value %d: ", i + 1);
        for (int j = 0; j < values[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void printVerticalHistogram(int values[], int count) {
    int maxVal = 0;
    for (int i = 0; i < count; i++) {
        if (values[i] > maxVal) maxVal = values[i];
    }

    for (int i = 0; i < maxVal; i++) {
        for (int j = 0; j < count; j++) {
            if (values[j] >= maxVal - i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    for (int i = 0; i < count; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");
}

int main() {
    int values[] = {3, 5, 1, 4};
    int count = 4;
    printHorizontalHistogram(values, count);
    printVerticalHistogram(values, count);
    return 0;
}
