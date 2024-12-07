#include <stdio.h>


float calculate(int num1, int num2, char operation) {
    float result;
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = (float) num1 / num2;
            } else {
                printf("Error: Division by zero.\n");
                result = 0;
            }
            break;
        default:
            printf("Invalid operation.\n");
            result = 0;
    }
    return result;
}

int main() {
    int num1, num2;
    char operation;

    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);  

    
    float result = calculate(num1, num2, operation);
    printf("Result: %.2f\n", result);

    return 0;
}
