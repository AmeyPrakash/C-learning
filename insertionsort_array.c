#include<stdio.h>
#include<stdlib.h>
void insertionsort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
            
        }
        arr[j + 1] = key;
    }

}
int main() {
    int a[100], size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for(int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    printf("Original array: ");
    for(i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    insertionsort(a, size);
    printf("\nSorted array: ");
    for(i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    system("pause");
    return 0;
}