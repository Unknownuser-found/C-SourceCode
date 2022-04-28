#include <stdio.h>
int main()
{
    int num, zero = 0;
    printf("Please Enter a value\n");
    scanf("%d", &num);

    do
    {
        printf("%d\n", zero);
        zero = zero + 1;
    } while (zero < num);

    return 0;
}
