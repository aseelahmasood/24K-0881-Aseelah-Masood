#include <stdio.h>

#define METERS_TO_KM 0.001  


void convertToKilometers(double meters) {
    static int count = 0;
    double kilometers = meters * METERS_TO_KM;
    count++;

    printf("%.2f meters is %.2f kilometers\n", meters, kilometers);
    printf("Function called %d times.\n", count);
}

int main() {
    double meters;

    
    for (int i = 0; i < 3; i++) {
        printf("Enter distance in meters: ");
        scanf("%lf", &meters);
        convertToKilometers(meters);
    }

    return 0;
}
