#include <stdio.h>

int main()
{
    int i1_84, i2_84, n_84;

    printf("Enter the number of rows: \n");
    scanf("%d", &n_84);

    for (i1_84 = 1; i1_84 <= n_84; i1_84++)
    {
        for (i2_84 = 1; i2_84 <= i1_84; i2_84++)
            printf("%4d", (i1_84 + i2_84 + 1) % 2);
        printf("\n");
    }

    return 0;
}