#include<stdio.h>
int main() 
{
    int minutes,hour,min;
    printf("Enter the total minutes: ");
    scanf("%d",&minutes);
        hour=minutes/60;
    min=minutes%60;
        printf("%d minutes=%d hour and %d minutes\n",minutes,hour,min);   
    return 0;
}
