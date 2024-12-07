#include <stdio.h>

int main() {
    int n, i, j;
    
 
    printf("Enter the starting odd number: ");
    scanf("%d", &n);
    

    if (n % 2 == 0) {
        n--;
    }

  
    for (i = 0; n > 0; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", n);
            n -= 2; 
            if (n <= 0) break; 
        printf("\n");
        if (n <= 0) break; 
    }
    
    return 0;
}
