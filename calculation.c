#include<stdio.h>

int main() {
    int roll_no, physics, chemistry, comp_app, total;
    float percentage;
    char name[50], division[10];

    printf("Enter Roll Number: ");
    scanf("%d", &roll_no);

    printf("Enter Name of the Student: ");
    scanf("%s", name);

    printf("Enter marks in Physics: ");
    scanf("%d", &physics);

    printf("Enter marks in Chemistry: ");
    scanf("%d", &chemistry);

    printf("Enter marks in Computer Application: ");
    scanf("%d", &comp_app);

    total = physics + chemistry + comp_app;
    percentage = total / 3.0;

    if (percentage >= 60) {
        sprintf(division, "First");
    } else if (percentage >= 50) {
        sprintf(division, "Second");
    } else if (percentage >= 40) {
        sprintf(division, "Third");
    } else {
        sprintf(division, "Fail");
    }

    printf("\nRoll No: %d\n", roll_no);
    printf("Name of Student: %s\n", name);
    printf("Marks in Physics: %d\n", physics);
    printf("Marks in Chemistry: %d\n", chemistry);
    printf("Marks in Computer Application: %d\n", comp_app);
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f\n", percentage);
    printf("Division: %s", division);

    return 0;
}
