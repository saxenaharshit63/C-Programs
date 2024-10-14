#include<stdio.h>
#include<math.h>
int main() {
	float p, r, t, ci;
	printf("Enter amount: ");
	scanf("%f", &p);
	printf("Enter time: ");
	scanf("%f", &t);
	printf("Enter rate: ");
	scanf("%f", &r); 
	
	ci = p*((1+r/100), t);
	printf("Compound intrest is: %f", ci);
	return 0;
}
