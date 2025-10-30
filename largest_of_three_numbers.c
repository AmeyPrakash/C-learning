#include<stdio.h>
#include<stdlib.h>

int main() {
    int i ,j ,k;
    printf("Enter three numbers:");
    scanf("%d %d %d", &i, &j, &k);

    if ((i < j) && (j<k))
    {
        printf("Largest number is: %d\n", k);
    }

    else if ((i < j) || (i <k)) 
    {

        if ((i < j) && (j > k)) {
            printf("Largest number is: %d\n", j);      
        }
        else {
            printf("J is not largest of all\n");
        }
    } 
    else 
    {
        printf("Largest number is: %d\n", i);
    }
    
system("pause");
return 0;    
}