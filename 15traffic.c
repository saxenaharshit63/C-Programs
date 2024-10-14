#include<stdio.h>
int main() {
	char ch;
	printf("Enter color RED-R, Yellow-Y or Green-G: ");
	scanf("%c", &ch);
	
	if (ch == 'R') 
	{
		printf("Wait");
	}
	else if (ch == 'Y') 
	{
		printf("Ready to go");
	}
	else
	{
		printf("Go");
	}
	return 0;
}
