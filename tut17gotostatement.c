#include <stdio.h>

int main(){
    // label:
    //     printf("We are inside the label\n");
    //     printf("We are inside the label\n");
    //     printf("We are inside the label\n");
    //     printf("We are inside the label\n");
    //     printf("We are inside the label\n");
    //     goto end;
    // goto label;
    // end :
    //     printf("this is the end");
    for (int i = 0; i < 10; i++)
    {
        printf("%d",i);
        int num;
        for (int j = 0; j < 9; j++);
        {
            printf("Enter zero to exit\n");
            scanf("%d", &num);
                if (num==0)
                {
                    break;
                }
                
        }
        
    }
    end :
        printf("You ended the program");



    return 0;

}
