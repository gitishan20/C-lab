#include <stdio.h>
int main()
{
    int i_84, j_84, k_84;
    printf("enter your range");
    scanf("%d%d", &i_84, &j_84);
    for (k_84 = i_84; k_84 < (j_84 + 1); k_84++)
        printf("\n%d", k_84);
    return 0;
}