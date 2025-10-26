#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2;
    int sum, difference, product, remainder;
    float division;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    division = (float)num1 / num2; 

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Division: %.2f\n", division);
    printf("Remainder: %d\n", remainder);

    system("pause");

    return 0;
}
