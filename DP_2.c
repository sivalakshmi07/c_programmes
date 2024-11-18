#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the 1st number:");
	scanf("%d",&a);
	printf("Enter the 2nd number:");
	scanf("%d",&b);
	if(a>b)
	printf("%d is largest.\n",a);
	else
	printf("%d is largest.\n",b);
	return 0;
}
