#include<stdio.h>
int main() 
{
	int p, c, m;
	printf("Enter marks of Physics, Chemistry and Maths Out of 100: ");
	scanf("%d %d %d", &p, &c, &m);
	
	int sum;
	sum = p + c + m;
	if(sum > 150) 
	{
		printf("Eligible, Total number is: %d", sum);
	} 
	else
	{
		printf("Not Eligible, Total number is: %d", sum);
	}
	return 0;
}
