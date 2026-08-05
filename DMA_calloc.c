#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    int *p;
    p = (int*)calloc(20, sizeof(int));
    p[0] = 10;
    p[1] = 20;
    printf("p[0] = %d\n", p[0]);
    printf("p[1] = %d\n", p[1]);
    printf("p[2] = %d\n", p[2]);
    printf("p[3] = %d\n", p[3]);
    free(p);
    system("pause");
    return 0;
}