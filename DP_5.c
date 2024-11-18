#include<stdio.h>
int main()
{
	int a;
	printf("Enter a character:");
	scanf("%c",&a);
	switch(a)
	{
		case 'A' :printf("it is a vowel.");
		break;
		case 'a':printf("it is a vowel.");
		break;
		case 'E':printf("it is a vowel.");
		break;
		case 'e':printf("it is a vowel.");
		break;
		case 'I':printf("it is a vowel.");
		break;
		case 'i':printf("it is a vowel.");
		break;
		case 'O':printf("it is a vowel.");
		break;
		case 'o':printf("it is a vowel.");
		break;
		case 'U':printf("it is a vowel.");
		break;
		case 'u':printf("it is a vowel.");
		break;
		default:printf("It is a consonant.");
		break;
	}
	return 0;
}
