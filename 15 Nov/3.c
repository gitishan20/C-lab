#include <stdio.h>
int main()
{
    int i_84, n_84, t1_84 = 0, t2_84 = 1, nextTerm = 0;
    printf("Enter the number of terms:");
    scanf("%d", &n_84);
    printf("Fibonacci Series: ");
    for (i_84 = 1; i_84 <= n_84; ++i_84)
    {
        printf("%d,", t1_84);
        nextTerm = t1_84 + t2_84;
        t1_84 = t2_84;
        t2_84 = nextTerm;
    }
    return 0;
}