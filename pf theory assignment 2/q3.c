#include <stdio.h>
#include <string.h>

void compressWord(char *word) {
    int j = 0;
    for (int i = 0; i < strlen(word); i++) {
        if (word[i] != word[i + 1]) {
            word[j++] = word[i];
        }
    }
    word[j] = '\0';
}

int main() {
    char words[3][100] = {"booooook", "coooool", "heeeey"};
    for (int i = 0; i < 3; i++) {
        compressWord(words[i]);
        printf("\"%s\" becomes \"%s\"\n", words[i], words[i]);
    }
    return 0;
}
