#include<stdio.h>
int main() {
	int n;
	printf("Enter the no. of month to print the days: ");
	scanf("%d", &n);
	
	if(n==2) {
		printf("28 or 29 days");
	} else if (n%2==0) {
		printf("30 days");
	} else {
		printf("31 days");
	}
	return 0;
}
