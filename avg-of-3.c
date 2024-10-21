#include<stdio.h>
int main()
{
	int a,b,c,sum,num=3,avg;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("Enter the third number:");
	scanf("%d",&c);
	sum=a+b+c;
	avg=sum/num;
	printf("The average is:%d",avg);
	return 0;
}
