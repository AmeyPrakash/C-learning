#include <stdio.h>
#include <stdlib.h>
int main () {
    int dividend, divisor, quotient, remainder;

    printf("Enter Dividend:");
    scanf("%d", &dividend);
    printf("Enter Divisor:");
    scanf("%d", &divisor);

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);
    system("pause");
    return 0;
}