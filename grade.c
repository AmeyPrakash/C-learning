#include<stdio.h>
#include<stdlib.h>

struct student{
    char * subject[5];
    float marks[5];
};

int main() {
    int i, sum = 0;
    float percentage;
    struct student std;
    std.subject[5];
    std.marks[5];
    for(i = 0; i <= 4; i++) {
        printf("Enter the %d subject: ", i + 1);
        scanf("%s", &std.subject[i]);
        printf("Enter the marks for %d subject out of 100: ", i + 1 );
        scanf("%f", &std.marks[i]);
    }

    sum = std.marks[0] + std.marks[1] + std.marks[2] + std.marks[3] + std.marks[4];
    percentage = sum / 5;
    printf("\n Your percentage is %.1f", percentage);

    if (percentage > 90.0) {
        printf("\nGrade: A\n");}
    else if (percentage > 80.0 && percentage < 90.0) {
        printf("\nGrade: B\n");
    }
    else if (percentage > 60.0 && percentage < 80.0){
        printf("\nGrade: C\n");
    } 
    else {
        printf("\nGrade: D\n");
    }
system("pause");
    return 0;
}