#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int BinaryToDecimal(int number) {
    int decimal = 0, base = 1;
    while (number > 0) {
        decimal += (number % 10) * base;
        number /= 10;
        base *= 2;
    }
    return decimal;
}

int DecimalToBinary(int number) {
    int binary = 0, base = 1;
    while (number > 0) {
        binary += (number % 2) * base;
        number /= 2;
        base *= 10;
    }
    return binary;
}

void DecimalToHexadecimal(int number) {
    printf("0x%x\n", number);
}

void HexadecimalToDecimal(char hexNumber[]) {
    printf("%d\n", (int)strtol(hexNumber, NULL, 16));
}

void BinaryToHexadecimal(int number) {
    printf("0x%x\n", BinaryToDecimal(number));
}

void HexadecimalToBinary(char hexNumber[]) {
    printf("%d\n", DecimalToBinary((int)strtol(hexNumber, NULL, 16)));
}

int main() {
    int choice, number;
    char hexNumber[100];

    printf("Enter your choice:\n");
    printf("1. Binary to Decimal\n2. Decimal to Binary\n3. Decimal to Hexadecimal\n4. Hexadecimal to Decimal\n5. Binary to Hexadecimal\n6. Hexadecimal to Binary\n");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter binary number: ");
            scanf("%d", &number);
            printf("Decimal: %d\n", BinaryToDecimal(number));
            break;
        case 2:
            printf("Enter decimal number: ");
            scanf("%d", &number);
            printf("Binary: %d\n", DecimalToBinary(number));
            break;
        case 3:
            printf("Enter decimal number: ");
            scanf("%d", &number);
            DecimalToHexadecimal(number);
            break;
        case 4:
            printf("Enter hexadecimal number: ");
            scanf("%s", hexNumber);
            HexadecimalToDecimal(hexNumber);
            break;
        case 5:
            printf("Enter binary number: ");
            scanf("%d", &number);
            BinaryToHexadecimal(number);
            break;
        case 6:
            printf("Enter hexadecimal number: ");
            scanf("%s", hexNumber);
            HexadecimalToBinary(hexNumber);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
