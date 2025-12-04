#include <stdio.h>
#include<stdlib.h>
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;  
}

int main() {
    int arr[] = {12, 45, 23, 67, 89, 34};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 67;

    int result = linearSearch(arr, n, key);

    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", result);
    system("pause");
    return 0;
}
