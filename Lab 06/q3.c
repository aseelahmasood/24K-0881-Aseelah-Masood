#include<stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; 
    }
    return 1;
}
int main(){
    int number;
    int primeSum = 0;
    int compositeSum = 0;

    printf("Enter a number (negative to stop): ");
    
    while (1) {
        scanf("%d", &number);
        
        if (number < 0) break;

        if (isPrime(number)) {
            primeSum += number;
            printf("%d is a prime number.\n", number);
        } else {
            compositeSum += number;
            printf("%d is a composite number.\n", number);
        }
    }

    printf("Sum of prime numbers: %d\n", primeSum);
    printf("Sum of composite numbers: %d\n", compositeSum);

    return 0;
}
