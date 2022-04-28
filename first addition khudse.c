#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter a Number to add :");
    scanf("%d", &a);
    printf("Enter the Second Numbr:");
    scanf("%d", &b);

    printf("\nThe Answer is :" "%d", a+b);
    return 0;        
}