#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int validateEmail(char* email) {
    int atCount = 0, dotFound = 0, i;
    for (i = 0; email[i] != '\0'; i++) {
        if (email[i] == '@') atCount++;
        if (atCount == 1 && email[i] == '.') dotFound = 1;
    }
    return (atCount == 1 && dotFound && i > 0);
}

int main() {
    char* email;
    email = (char*)malloc(100 * sizeof(char));
    printf("Enter email: ");
    scanf("%s", email);
    if (validateEmail(email)) {
        printf("Valid Email\n");
    } else {
        printf("Invalid Email\n");
    }
    free(email);
    return 0;
}
