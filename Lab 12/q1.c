#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    float marks;
};

int main() {
    int n;
    float totalMarks = 0.0, average;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Name: ");
        getchar();
        fgets(students[i].name, 50, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        totalMarks += students[i].marks;
    }

    average = totalMarks / n;
    printf("\nThe average marks of the class: %.2f\n", average);

    free(students);
    return 0;
}
