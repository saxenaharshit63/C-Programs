#include<stdio.h>

int main() {
    int num1, num2, num3, largest;

    printf("Enter number1 = ");
    scanf("%d", &num1);

    printf("Enter number2 = ");
    scanf("%d", &num2);

    printf("Enter number3 = ");
    scanf("%d", &num3);

    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    printf("The greatest number is: %d\n", largest);

    return 0;
}
