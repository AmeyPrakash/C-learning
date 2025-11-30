#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main() {
    char m[30];
    printf("Enter Your name: ");
    gets(m);
    printf("Your name is: %s\n", m);
    puts(m);
    system("pause");
}