#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main() {
    char m[30];
    int i = 0, count = 0;
    printf("Enter Any String: ");
    fgets(m, sizeof(m), stdin);
    while(m[i] != '\0') {
        if(m[i] != ' ') {
            count++;
        }
    i++; 
    }  
   
    printf("Lenth of the string is: %d\n",count - 1);
    system("pause");
}