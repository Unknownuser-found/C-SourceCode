#include <stdio.h>

int main()
{
    int a , b ;
    a = 30;
    b = 30;
    float c = 30;
    printf("a + b : %d\n", a+b);
    printf("a - b : %d\n", a-b);
    printf("a * b : %d\n", a*b);
    printf("a / b : %d\n", a/b);             // divide(/) hamesha int hi return dega int ka
    
    printf("a / c : %f\n", a/c);             // floating answer ke liye %f use hota h
    printf("a modulus b : %d\n", a%b);


     printf("a equals to b : %d\n", a&&b);
     printf("a equals to b : %d\n", a||b);
    return 0;
}