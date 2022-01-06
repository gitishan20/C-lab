#include <stdio.h>

int main()
{
    int i_84, y_84 = 1, n_84, n1_84;
    printf("Enter the number and the power of the number\n");
    scanf("%d %d", &n_84, &n1_84);
    for (i_84 = 1; i_84 <= n1_84; i_84++)
    {
        y_84 = y_84 * n_84;
    }
    printf("%d\n", y_84);
    return 0;
}