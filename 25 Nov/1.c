#include <stdio.h>
int main()

{
    /*local variable defination*/
    int a_84 = 10; /* while loop execution*/
    while (a_84 < 20)
    {
        printf("value of a: %d\n", a_84);
        a_84++;
        if (a_84 > 15)
        {
            /* terminate the loop*/
            break;
        }
    }
    return 0;
}