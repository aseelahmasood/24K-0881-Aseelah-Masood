#include <stdio.h>
#include <string.h>
#include <time.h>

struct Employee {
    int employeeCode;
    char employeeName[100];
    struct tm dateOfJoining;
};

void assignValues(struct Employee* emp) {
    printf("Enter employee code: ");
    scanf("%d", &emp->employeeCode);
    printf("Enter employee name: ");
    scanf("%s", emp->employeeName);
    printf("Enter date of joining (DD MM YYYY): ");
    scanf("%d %d %d", &emp->dateOfJoining.tm_mday, &emp->dateOfJoining.tm_mon, &emp->dateOfJoining.tm_year);
    emp->dateOfJoining.tm_mon -= 1;
    emp->dateOfJoining.tm_year -= 1900;
}

void calculateTenureAndDisplay(struct Employee emp[], int count) {
    time_t t = time(NULL);
    struct tm currentDate = *localtime(&t);
    int total = 0;
    for (int i = 0; i < count; i++) {
        int tenure = (currentDate.tm_year - emp[i].dateOfJoining.tm_year) * 12 + (currentDate.tm_mon - emp[i].dateOfJoining.tm_mon);
        if (tenure > 36) {
            printf("Employee Code: %d, Name: %s, Tenure: %d months\n", emp[i].employeeCode, emp[i].employeeName, tenure);
            total++;
        }
    }
    printf("Number of employees with tenure greater than 3 years: %d\n", total);
}

int main() {
    struct Employee employees[4];
    for (int i = 0; i < 4; i++) {
        assignValues(&employees[i]);
    }
    calculateTenureAndDisplay(employees, 4);
    return 0;
}
