#include <stdio.h>
int main()
{
    int age;
    printf("Enter Your age :");
    scanf("%d", &age);
    if (age>=18 && age <=99)
    {
        printf("You are eligible to vroom Vroom");
    }
    else if(age =100 ){
        printf("Ab to mrja , or kitna jieywga");
    }
    
    else{
        printf("You are not eligible to drive, sorry");
    }
    
    return 0;
}
