#include <stdio.h>

struct TravelPackage {
    char packageName[30];
    char destination[30];
    int duration; 
    double cost;   
    int availableSeats;
};


void bookPackage(struct TravelPackage *pkg) {
    if (pkg->availableSeats > 0) {
        pkg->availableSeats--;
        printf("Package booked successfully!\n");
    } else {
        printf("Sorry, no seats available.\n");
    }
}

void displayPackage(struct TravelPackage pkg) {
    printf("Package Name: %s\n", pkg.packageName);
    printf("Destination: %s\n", pkg.destination);
    printf("Duration: %d days\n", pkg.duration);
    printf("Cost: $%.2f\n", pkg.cost);
    printf("Seats Available: %d\n", pkg.availableSeats);
}

int main() {
    struct TravelPackage packages[3] = {
        {"Beach Escape", "Hawaii", 7, 1200.50, 10},
        {"Mountain Adventure", "Colorado", 5, 800.30, 5},
        {"City Tour", "New York", 3, 500.00, 2}
    };


    printf("Available Travel Packages:\n");
    for (int i = 0; i < 3; i++) {
        displayPackage(packages[i]);
    }


    int packageIndex;
    printf("Enter package number to book (1-3): ");
    scanf("%d", &packageIndex);
    if (packageIndex >= 1 && packageIndex <= 3) {
        bookPackage(&packages[packageIndex - 1]);
    }

    return 0;
}
