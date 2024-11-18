#include<stdio.h>
int main()
{
	int n,leap;
	printf("Enter a year:");
	scanf("%d",&n);
	if(n%4==0)
	printf("It is not a leap year.");
	else
	printf("It is a leap year.");
	return 0;
}
