#include<stdio.h>
int main()
{
	int a,sq,cb;
	printf("Enter a number to find  the square:");
	scanf("%d",&a);
	printf("Enter a number to find the cube:");
	scanf("%d",&a);
	sq=a*a;
	printf("Square of %d=%d\n",a,sq);
	cb=a*a*a;
	printf("Cube of %d=%d",a,cb);
	return 0;
}
