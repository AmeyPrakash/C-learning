#include<stdio.h>
#include<stdlib.h>

int main() {

   int arr[3][2][2]= {};
   printf("Enter the values of x, y ,z\n");
    for(int i = 0; i <= 2; i++){
        for(int j = 0; j <= 1; j++){
            for(int k = 0; k <= 1; k++){
                scanf("%d",&arr[i][j][k]);
            }
        }

    }                  
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("arr[%d][%d][%d] = %d\n", i, j, k, arr[i][j][k]);
            }
        }
    }
    system("pause");
   return 0;
}