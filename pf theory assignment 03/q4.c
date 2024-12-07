#include <stdio.h>
#include <stdlib.h>

void inputEmployees(int** ratings, int numEmployees, int numPeriods) {
    for (int i = 0; i < numEmployees; i++) {
        for (int j = 0; j < numPeriods; j++) {
            do {
                printf("Enter rating for employee %d, period %d (1-10): ", i + 1, j + 1);
                scanf("%d", &ratings[i][j]);
            } while (ratings[i][j] < 1 || ratings[i][j] > 10);
        }
    }
}

void displayPerformance(int** ratings, int numEmployees, int numPeriods) {
    for (int i = 0; i < numEmployees; i++) {
        printf("Employee %d: ", i + 1);
        for (int j = 0; j < numPeriods; j++) {
            printf("%d ", ratings[i][j]);
        }
        printf("\n");
    }
}

int findEmployeeOfTheYear(int** ratings, int numEmployees, int numPeriods) {
    int bestEmployee = 0;
    float highestAvg = 0;
    for (int i = 0; i < numEmployees; i++) {
        float total = 0;
        for (int j = 0; j < numPeriods; j++) {
            total += ratings[i][j];
        }
        float avg = total / numPeriods;
        if (avg > highestAvg) {
            highestAvg = avg;
            bestEmployee = i;
        }
    }
    return bestEmployee;
}

int findHighestRatedPeriod(int** ratings, int numEmployees, int numPeriods) {
    int bestPeriod = 0;
    float highestAvg = 0;
    for (int j = 0; j < numPeriods; j++) {
        float total = 0;
        for (int i = 0; i < numEmployees; i++) {
            total += ratings[i][j];
        }
        float avg = total / numEmployees;
        if (avg > highestAvg) {
            highestAvg = avg;
            bestPeriod = j;
        }
    }
    return bestPeriod;
}

int findWorstPerformingEmployee(int** ratings, int numEmployees, int numPeriods) {
    int worstEmployee = 0;
    float lowestAvg = 10;
    for (int i = 0; i < numEmployees; i++) {
        float total = 0;
        for (int j = 0; j < numPeriods; j++) {
            total += ratings[i][j];
        }
        float avg = total / numPeriods;
        if (avg < lowestAvg) {
            lowestAvg = avg;
            worstEmployee = i;
        }
    }
    return worstEmployee;
}

int main() {
    int numEmployees = 3, numPeriods = 5;
    int** ratings = (int**)malloc(numEmployees * sizeof(int*));
    for (int i = 0; i < numEmployees; i++) {
        ratings[i] = (int*)malloc(numPeriods * sizeof(int));
    }

    inputEmployees(ratings, numEmployees, numPeriods);
    displayPerformance(ratings, numEmployees, numPeriods);

    int bestEmployee = findEmployeeOfTheYear(ratings, numEmployees, numPeriods);
    int bestPeriod = findHighestRatedPeriod(ratings, numEmployees, numPeriods);
    int worstEmployee = findWorstPerformingEmployee(ratings, numEmployees, numPeriods);

    printf("Employee of the Year: %d\n", bestEmployee + 1);
    printf("Highest Rated Period: %d\n", bestPeriod + 1);
    printf("Worst Performing Employee: %d\n", worstEmployee + 1);

    for (int i = 0; i < numEmployees; i++) {
        free(ratings[i]);
    }
    free(ratings);

    return 0;
}
