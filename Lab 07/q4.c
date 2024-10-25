#include <stdio.h>

void findDuplicates(int arr[], int n) {
    int count[n];
    for (int i = 0; i < n; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    printf("Elements occurring more than once: ");
    int found = 0; 
    for (int i = 0; i < n; i++) {
        if (count[i] > 1) {
            printf("%d ", i);
            found = 1; 
        }
    }
    
    if (!found) {
        printf("None");
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    findDuplicates(arr, n);

    return 0;
}
	
	
	
