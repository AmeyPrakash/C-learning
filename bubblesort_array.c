#include <stdio.h>
#include <stdlib.h>
void bubblesort(int arr[],int n) {
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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
    for(i=0;i<size;i++) {
        printf("%d", a[i]);
    }
    bubblesort(a,size);
    printf("\nSorted array:");
    for(i = 0;i < size; i++) {
        printf("%d", a[i]);
    }
    system("pause");
    return 0;

}