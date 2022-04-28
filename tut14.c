
#include <stdio.h>
int main()
{
    int num, zero = 0;
    printf("Please Enter a value:");
    scanf("%d", &num);
    while (num < 100);
    {
        printf("%d\n", num);
        num = num+1;
    }
    

    
    return 0;
}
