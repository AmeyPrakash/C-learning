#include<stdio.h>
#include<stdlib.h>

int main() {
    int radius;
    float area, perimeter;
    int arpe(int r, float *a,float *p);
    
    printf("\nEnter the radius of circle:  ");
    scanf("%d", &radius);

    arpe(radius, &area, &perimeter);

    printf("Area = %f", area);
    printf("Perimeter = %f", perimeter);

    system("pause");
    return 0;
}
int arpe(int r, float *a,float *p) {
    *a = 3.14 * r * r;
    *p = 3.14 * 2 * r;

}
