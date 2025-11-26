#include<stdio.h>
#include<stdlib.h>

void main() {
    int a, b;
    int swap(int *z, int *y);
    printf("Enter the first No.: ");
    scanf("%d", &a);
    printf("Enter the second No.: ");
    scanf("%d", &b);
    printf("Before swap || First no. = %d and Second No. = %d", a, b);
    swap(&a, &b);
    printf("\nAfter swap || a = %d b = %d", a, b);
    system("pause");
}
int swap(int *z, int *y) {
    int t;
    t = *z;
    *z = *y;
    *y = t;
}