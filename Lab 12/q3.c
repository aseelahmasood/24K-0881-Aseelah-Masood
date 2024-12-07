#include <stdio.h>
#include <stdlib.h>

int main() {
    int size, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("\nSum of the elements: %d\n", sum);

    free(arr);
    return 0;
}
