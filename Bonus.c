#include<stdio.h>
int main() {
	int exp;
	printf("Enter your experience in years to know the bonus: ");
	scanf("%d", &exp);
	
	if (exp >= 10) 
	{
		printf("You get 15 percent in the bonus.");
	}
	else if (exp >= 5 && exp < 10) 
	{
		printf("You get 10 percent in the bonus.");
	}
	else {
		printf("You get 5 percent in the bonus and 4000rs extra.");
	}
	
	return 0;
}
