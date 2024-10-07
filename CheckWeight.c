#include<stdio.h>
int main() {
	int bmi;
	printf("Enter Body, Mass & Index [BMI 0-30]: ");
	scanf("%d", &bmi);
	
	if (bmi < 18.5)
	{
		printf("Underweight");
	}
	else if (bmi > 18.5 && bmi < 24.9)
	{
		printf("Normal Weight");
	}
	else if (bmi > 25 && bmi < 29.9)
	{
		printf("Over Weight");
	}
	else
	{
		printf("Obesity");
	}
	
	return 0;
}
