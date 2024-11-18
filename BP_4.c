#include<stdio.h>
int main()
{
	float cel,fahr;
	printf("enter the cel value:");
	scanf("%f",&cel);
	fahr=cel*(9/5)+32;
	printf("The fahrenhei value=%f",fahr);
	return 0;
}
