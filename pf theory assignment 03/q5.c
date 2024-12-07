#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addSupplies(char*** speciesSupplies, int numSpecies, int* numSupplies) {
    for (int i = 0; i < numSpecies; i++) {
        printf("Enter number of supplies for species %d: ", i + 1);
        scanf("%d", &numSupplies[i]);
        speciesSupplies[i] = (char**)malloc(numSupplies[i] * sizeof(char*));
        for (int j = 0; j < numSupplies[i]; j++) {
            speciesSupplies[i][j] = (char*)malloc(100 * sizeof(char));
            printf("Enter supply %d for species %d: ", j + 1, i + 1);
            scanf("%s", speciesSupplies[i][j]);
        }
    }
}

void updateSupplies(char*** speciesSupplies, int speciesIndex, int numSupplies) {
    int supplyIndex;
    printf("Enter supply index to update: ");
    scanf("%d", &supplyIndex);
    if (supplyIndex >= 0 && supplyIndex < numSupplies) {
        printf("Enter new supply name: ");
        scanf("%s", speciesSupplies[speciesIndex][supplyIndex]);
    }
}

void removeSpecies(char*** speciesSupplies, int* numSpecies, int speciesIndex, int* numSupplies) {
    for (int i = 0; i < numSupplies[speciesIndex]; i++) {
        free(speciesSupplies[speciesIndex][i]);
    }
    free(speciesSupplies[speciesIndex]);
    for (int i = speciesIndex; i < *numSpecies - 1; i++) {
        speciesSupplies[i] = speciesSupplies[i + 1];
        numSupplies[i] = numSupplies[i + 1];
    }
    (*numSpecies)--;
}

void displayInventory(char*** speciesSupplies, int numSpecies, int* numSupplies) {
    for (int i = 0; i < numSpecies; i++) {
        printf("Species %d supplies: ", i + 1);
        for (int j = 0; j < numSupplies[i]; j++) {
            printf("%s ", speciesSupplies[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int numSpecies = 3;
    int* numSupplies = (int*)malloc(numSpecies * sizeof(int));
    char*** speciesSupplies = (char***)malloc(numSpecies * sizeof(char**));

    addSupplies(speciesSupplies, numSpecies, numSupplies);
    displayInventory(speciesSupplies, numSpecies, numSupplies);

    removeSpecies(speciesSupplies, &numSpecies, 1, numSupplies);
    displayInventory(speciesSupplies, numSpecies, numSupplies);

    free(numSupplies);
    for (int i = 0; i < numSpecies; i++) {
        for (int j = 0; j < numSupplies[i]; j++) {
            free(speciesSupplies[i][j]);
        }
        free(speciesSupplies[i]);
    }
    free(speciesSupplies);
    return 0;
}
