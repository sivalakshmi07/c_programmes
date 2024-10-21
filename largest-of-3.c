#include<stdio.h>
int main()
{
	int a,b,c,lrg;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("Enter the third number:");
	scanf("%d",&c);
	if(a>b)
	printf("%d is the largest.",a);
	else if(b>c)
	printf("%d is the largest.",b);
	else
	printf("%d is the largest.",c);
	return 0;
}
