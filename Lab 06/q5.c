#include<stdio.h>
int main(){
	int numbers[] = {65536, 32768, 10922, 2730, 546, 91, 13, 1, 0};
    int length = sizeof(numbers) / sizeof(numbers[0]); 

    for (int i = 0; i < length; i++) {
        printf("%d, ", numbers[i]);
    }

    return 0;
}

