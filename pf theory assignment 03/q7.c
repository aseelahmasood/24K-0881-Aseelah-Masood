#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ContentMetadata {
    char title[100];
    float rating;
    int runtime;
    char encodingFormat[50];
};

struct UserProfile {
    float *engagementScores;
    float *devicePreferences;
};

int main() {
    int numUsers = 3;
    int numCategories = 3;
    int numDevices = 2;
    int numContents = 3;

    double **engagementMatrix = malloc(numUsers * sizeof(double *));
    for (int i = 0; i < numUsers; i++) {
        engagementMatrix[i] = malloc(numCategories * sizeof(double));
    }

    double **deviceMatrix = malloc(numUsers * sizeof(double *));
    for (int i = 0; i < numUsers; i++) {
        deviceMatrix[i] = malloc(numDevices * sizeof(double));
    }

    struct ContentMetadata ***contentMetadataMatrix = malloc(numCategories * sizeof(struct ContentMetadata **));
    for (int i = 0; i < numCategories; i++) {
        contentMetadataMatrix[i] = malloc(numContents * sizeof(struct ContentMetadata *));
        for (int j = 0; j < numContents; j++) {
            contentMetadataMatrix[i][j] = malloc(sizeof(struct ContentMetadata));
            snprintf(contentMetadataMatrix[i][j]->title, sizeof(contentMetadataMatrix[i][j]->title), "Content %d", j + 1);
            contentMetadataMatrix[i][j]->rating = (float)(j + 1) * 2.5;
            contentMetadataMatrix[i][j]->runtime = 100 + (j * 10);
            snprintf(contentMetadataMatrix[i][j]->encodingFormat, sizeof(contentMetadataMatrix[i][j]->encodingFormat), "Format %d", j + 1);
        }
    }

    struct UserProfile *users = malloc(numUsers * sizeof(struct UserProfile));
    for (int i = 0; i < numUsers; i++) {
        users[i].engagementScores = engagementMatrix[i];
        users[i].devicePreferences = deviceMatrix[i];
    }

    for (int i = 0; i < numUsers; i++) {
        for (int j = 0; j < numCategories; j++) {
            engagementMatrix[i][j] = 5.0 * (i + 1);
        }
    }

    for (int i = 0; i < numUsers; i++) {
        for (int j = 0; j < numDevices; j++) {
            deviceMatrix[i][j] = 10.0 * (i + 1);
        }
    }

    for (int i = 0; i < numUsers; i++) {
        printf("User %d Engagement Scores:\n", i + 1);
        for (int j = 0; j < numCategories; j++) {
            printf("Category %d: %.2f\n", j + 1, engagementMatrix[i][j]);
        }

        printf("User %d Device Preferences:\n", i + 1);
        for (int j = 0; j < numDevices; j++) {
            printf("Device %d: %.2f\n", j + 1, deviceMatrix[i][j]);
        }

        printf("\n");
    }

    printf("Content Metadata:\n");
    for (int i = 0; i < numCategories; i++) {
        printf("Category %d:\n", i + 1);
        for (int j = 0; j < numContents; j++) {
            printf("Content %d - Title: %s, Rating: %.2f, Runtime: %d mins, Encoding: %s\n",
                   j + 1,
                   contentMetadataMatrix[i][j]->title,
                   contentMetadataMatrix[i][j]->rating,
                   contentMetadataMatrix[i][j]->runtime,
                   contentMetadataMatrix[i][j]->encodingFormat);
        }
    }

    for (int i = 0; i < numCategories; i++) {
        for (int j = 0; j < numContents; j++) {
            free(contentMetadataMatrix[i][j]);
        }
        free(contentMetadataMatrix[i]);
    }
    free(contentMetadataMatrix);

    free(engagementMatrix);
    free(deviceMatrix);
    free(users);

    return 0;
}
