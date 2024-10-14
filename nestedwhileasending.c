#include<stdio.h>
int main()
{
	int i,j,a;
	printf("enter a value:");
	scanf("%d",&a);
	i=1;
	while(i<=a)
	{
		j=1;
		while(j<=i)
		{
			printf("%d \t",j);
			j++;
		}
		i++;
			printf("\n");
	}
}
