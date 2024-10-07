#include<stdio.h>
int main() {
	int r;
	printf("Enter your reading: ");
	scanf("%d", &r);
	
	if(r >= 0 && r <= 100) 
	{
		printf("You have to pay 2.40rs Per Unit");
	}
	else if(r >= 101 && r <= 250)
	{
		printf("You have to pay 3.20rs Per Unit");
	}
	else if(r >= 251 && r <= 500)
	{
		printf("You have to pay 4.60rs Per Unit");
	}
	else
	{
		printf("You have to pay 5.80rs Per Unit");
	}
	
	return 0;
}
