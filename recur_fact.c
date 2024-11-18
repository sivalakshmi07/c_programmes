#include<stdio.h>
int fact(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return n+fact(n-1);
	}
}
int main()
{
	int f,n;
	printf("enter a number:");
	scanf("%d",&n);
	f=fact(n);
	printf("%d",f);
	return 0;
}
