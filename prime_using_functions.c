#include<stdio.h>
#include<stdlib.h>
int isprime(int N) {
    int i;
    for(i = 2; i < N; i++){
        if(N % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() 
{
    int N;
    printf("Enter a no.");
    scanf("%d", &N);

    if(isprime(N)) 
    {
        printf("Yes\n");
    }
    else 
    {
        printf("No\n");

    }
    system("pause");
    return 0;
}
