#include <stdio.h>
int main()
{

    int n_84, i_84, a_84 = 1;
    printf("enter a number=");
    scanf("%d", &n_84);
    for (i_84 = 2; i_84 <= n_84 / 2; i_84++)
    {
        if (n_84 % i_84 == 0)
        {
            a_84 = 0;
            break;
        }
    }
    if (a_84 == 1)
        printf("the number %d is a prime number", n_84);
    else
        printf("the number %d is not a prime number", n_84);
    return 0;
}