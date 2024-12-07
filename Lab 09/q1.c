#include <stdio.h>
#include <string.h>

#define MAX_WORDS 5
#define MAX_LENGTH 20


int is_palindrome(char str[]) {
    int start = 0, end = strlen(str) - 1;
    
    while (start < end) {
        if (str[start] != str[end]) {
            return 0;  
        }
        start++;
        end--;
    }
    return 1;  
}

int main() {
    char words[MAX_WORDS][MAX_LENGTH];
    int i;

    
    printf("Enter 5 words (each with a maximum of 20 characters):\n");
    for (i = 0; i < MAX_WORDS; i++) {
        scanf("%s", words[i]);
    }

   
    for (i = 0; i < MAX_WORDS; i++) {
        if (is_palindrome(words[i])) {
            printf("Word: %s is a Palindrome\n", words[i]);
        } else {
            printf("Word: %s is Not a Palindrome\n", words[i]);
        }
    }

    return 0;
}
