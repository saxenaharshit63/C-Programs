#include<stdio.h>
int main() {
	int n;
	printf("Enter any number: ");
	scanf("%d", &n);
	
	if (n%5==0 && n%11==0) 
	{
		printf("Number is divisible by both 5 & 11");	
	}
	else
	{
		printf("Number is not divided!");
	}
	
	return 0;
}
