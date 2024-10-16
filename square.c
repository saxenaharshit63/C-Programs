#include<stdio.h>

int square();
int main()
{
	printf("%d", square());
	return 0;
}

int square()
{
	int a;
	printf("Enter any no: ");
	scanf("%d", &a);
	return a*a;
}
