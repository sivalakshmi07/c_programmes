//A = P (1+rt)
#include<stdio.h>
int main()
{
	int p,rate,year;
	float simp_intr;
	printf("ENTER THE AMOUNT BORROWED:");
	scanf("%d",&p);
	printf("ENTER THE RATE OF INTREST:");
	scanf("%d",&rate);
	printf("ENTER THE NUMBER OF YEARS:");
	scanf("%d",&year);
	simp_intr=p*(1+rate*year);
	printf("THE SIMPLE INTREST=%2f",simp_intr);
	return 0;
}
