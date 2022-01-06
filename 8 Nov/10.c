#include <stdio.h>
int main()
{
    int i_84, n_84;

    printf("Enter the number to start:\n");
    scanf("%d", &i_84);

    printf("Enter the number to end:\n");
    scanf("%d", &n_84);

    while (i_84 <= n_84)
    {
        printf("%d\n", i_84);
        i_84++;
    }
    return 0;
}