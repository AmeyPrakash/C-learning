#include <stdio.h>
#include<stdlib.h>

int factorial(int n);

int main() {
    int num, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    fact = factorial(num);

    printf("Factorial of %d = %d\n", num, fact);
system("pause");
    return 0;
}

int factorial(int n) {
    int i, result = 1;
    for(i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
   
}

   