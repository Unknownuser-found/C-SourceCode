#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    a=10;
    float b = 9.1;
    printf("The value of a is %d  and\n the value of b is %40.f", a , b);   // 40. something lagane se utne characters ke white spce de dega format specifier ke sath....

    //escape sequence character:
    // printf("This is a tab escape sequence \t\t this is beep \a");
    return 0;
}