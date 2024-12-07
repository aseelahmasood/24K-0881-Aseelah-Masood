#include <stdio.h>
#include <string.h>

void countCharFrequency(char *slogan) {
    int freq[256] = {0};
    for (int i = 0; slogan[i] != '\0'; i++) {
        freq[slogan[i]]++;
    }

    printf("{");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("'%c': %d", i, freq[i]);
            if (i < 255) printf(", ");
        }
    }
    printf("}\n");
}

int main() {
    char *slogans[] = {"buy now", "save big", "limited offer"};
    for (int i = 0; i < 3; i++) {
        printf("For \"%s\": ", slogans[i]);
        countCharFrequency(slogans[i]);
    }
    return 0;
}
