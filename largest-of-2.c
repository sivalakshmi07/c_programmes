#include<stdio.h>
int main()
{
	int a,b,lrg;
	printf("Enter any two number:");
	scanf("%d %d",&a,&b);
	if(a>b)
		printf("The largest number is:%d",a);
	else
	printf("The largest number is:%d",b);
	return 0;
}
