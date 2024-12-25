#include<stdio.h>
int main()
{
	int a,b,sum=0,mul,div,sub;
	printf("Enter 2 numbers:");
	scanf("%d %d",&a,&b);
	sum=a+b;
	mul=a*b;
	div=a/b;
	sub=a-b;
	printf("Sum=%d\n",sum);
	printf("product=%d\n",mul);
	printf("division=%d\n",div);
	printf("sub=%d\n",sub);
	return 0;
}
