#include <stdio.h>
int main()
{
    int age, marks;
    printf("Enter Your age :");
    scanf("%d", &age);
    printf("enter your marks");
    scanf("%d", &marks) ;

    switch (age)
    {
    case 17:
        printf("The age is 17, you are not eligible to drive...");
        break; // if we not use break, it will execute all other cases
    case 18:
        printf("The age is 18, you are eligible to drive...");
        break; 
            switch (marks);
            {
            case 45:
                printf("Your marks are 45");
                break;

            default:
                printf("Your marks are not 45");
                break;
            }
        
    case 25:
        printf("The age is 25, you are eligible to drive and drink also...");
        break;

    default:
        printf("the age is not valid because its not written in the code asshole");
        break;
    }

    return 0;
}
