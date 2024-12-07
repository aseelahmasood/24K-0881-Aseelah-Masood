#include <stdio.h>
#include <string.h>


void reverse_string(char str[]) {
    int start = 0, end = strlen(str) - 1;
    char temp;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];

   
    printf("Enter a string: ");
    scanf("%s", str);

    
    reverse_string(str);

   
    printf("Reversed string: %s\n", str);

    return 0;
}
