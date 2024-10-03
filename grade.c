#include<stdio.h>

int main() {
    char grade;

    printf("Input the grade (E, V, G, A, F): ");
    scanf("%c", &grade);

    switch (grade) {
        case 'E':
            printf("You have chosen: Excellent");
            break;
        case 'V':
            printf("You have chosen: Very Good");
            break;
        case 'G':
            printf("You have chosen: Good");
            break;
        case 'A':
            printf("You have chosen: Average");
            break;
        case 'F':
            printf("You have chosen: Fail");
            break;
        default:
            printf("Invalid grade entered.");
    }

    return 0;
}
