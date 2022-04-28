#include <stdio.h>

int main()
{
    int i, age;
    printf("Hello World");
    for (i = 0; i < 10; i++)
    {
        printf("%d\nEnter Your Age:", i);
        scanf("%d", &age);
        // if (age>20)
        // {
        //     break;
        // }
        if (age > 50)
        {
            continue;
        }
           printf("This is line number one");
            printf("This is line number two");
            printf("This is line number three");
    }
    return 0;
}
