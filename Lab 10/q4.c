#include <stdio.h>
#include <string.h>

struct Car {
    char make[20];
    char model[20];
    int year;
    double price;
    double mileage;
};


void addCar(struct Car *car) {
    printf("Enter car make: ");
    scanf("%s", car->make);
    printf("Enter car model: ");
    scanf("%s", car->model);
    printf("Enter car year: ");
    scanf("%d", &car->year);
    printf("Enter car price: ");
    scanf("%lf", &car->price);
    printf("Enter car mileage: ");
    scanf("%lf", &car->mileage);
}


void displayCar(struct Car car) {
    printf("Make: %s\n", car.make);
    printf("Model: %s\n", car.model);
    printf("Year: %d\n", car.year);
    printf("Price: %.2f\n", car.price);
    printf("Mileage: %.2f\n", car.mileage);
}


void searchCar(struct Car cars[], int n, char *searchTerm) {
    for (int i = 0; i < n; i++) {
        if (strcmp(cars[i].make, searchTerm) == 0 || strcmp(cars[i].model, searchTerm) == 0) {
            displayCar(cars[i]);
        }
    }
}

int main() {
    struct Car cars[5];
    int n = 0;
    

    for (int i = 0; i < 5; i++) {
        printf("\nAdding car %d:\n", i + 1);
        addCar(&cars[i]);
        n++;
    }


    printf("\nAll available cars:\n");
    for (int i = 0; i < n; i++) {
        displayCar(cars[i]);
    }


    char searchTerm[20];
    printf("\nEnter make or model to search: ");
    scanf("%s", searchTerm);
    printf("Search results:\n");
    searchCar(cars, n, searchTerm);

    return 0;
}
