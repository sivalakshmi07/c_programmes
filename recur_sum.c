#include<stdio.h>
int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
     	return n+sum(n-1);
    }
}
int main()
{
	int s,n;
	printf("enter the limit:");
	scanf("%d",&n);
	s=sum(n);
	printf("%d",s);
	return 0;
}
