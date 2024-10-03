#include<stdio.h>

int main() {
    int maths, physics, chemistry;
    int total_all, total_mp;

    printf("Enter marks in Maths: ");
    scanf("%d", &maths);
    
    printf("Enter marks in Physics: ");
    scanf("%d", &physics);
    
    printf("Enter marks in Chemistry: ");
    scanf("%d", &chemistry);

    total_all = maths + physics + chemistry;
    total_mp = maths + physics;

    if (maths >= 65 && physics >= 55 && chemistry >= 50 || total_all >= 190 || total_mp >= 140) {
        printf("The candidate is eligible for admission.");
    } else {
        printf("The candidate is not eligible for admission.");
    }

    return 0;
}
