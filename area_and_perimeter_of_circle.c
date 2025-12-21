#include<stdio.h>
#include<stdlib.h>

// Function declaration
void calculateCircle(float radius, float *area, float *circumference);

int main() {
    float radius, area, circumference;
    const float pi = 3.14159;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    // Call function using pointers
    calculateCircle(radius, &area, &circumference);
    
    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);
    
    system("pause");
    return 0;
}

// Function definition using pointers
void calculateCircle(float radius, float *area, float *circumference) {
    const float pi = 3.14159;
    *area = pi * radius * radius;
    *circumference = 2 * pi * radius;
}