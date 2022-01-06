#include <stdio.h>
int main()
{
    int i_84, j_84, n_84;
    char ch = 'A';
    printf("\nEnter how many rows=>");
    scanf("%d", &n_84);
    printf("\n");

    for (i_84 = 1; i_84 < 5; i_84++)
    {
        for (j_84 = 1; j_84 <= i_84; j_84++)
        {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}