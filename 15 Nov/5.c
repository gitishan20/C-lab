#include <stdio.h>
int main()
{
    int n_84, i_84, j_84, k_84;
    printf("\nEnter how many rows=>");
    scanf("%d", &n_84);
    printf("\n");
    for (i_84 = 1; i_84 <= n_84; i_84++)
    {
        for (j_84 = 1; j_84 <= n_84 - i_84; j_84++)
            printf(" ");
        for (k_84 = 1; k_84 <= i_84; k_84++)
            printf("* ");
        printf("\n");
    }
    return 0;
}