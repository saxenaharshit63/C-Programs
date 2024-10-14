#include<stdio.h>
int main() 
{
	int t;
	printf("Enter Temperature: ");
	scanf("%d", &t);
	
	if(t<20) 
	{
		printf("Weather is Cold.");
	} 
	else if(t>20 && t<40) 
	{
		printf("Weather is Moderate.");
	} 
	else {
		printf("Weather is Hot.");
	}
	return 0;
}
