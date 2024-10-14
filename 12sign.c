#include <stdio.h>

int main() {
    int number;

    printf("Enter the number = ");
    scanf("%d", &number);

    if (number > 0) {
        printf("Enter number is a positive number");
    } else if (number < 0) {
        printf("Enter number is a negative number");
    } else {
        printf("Enter number is zero");
    }

    return 0;
}
