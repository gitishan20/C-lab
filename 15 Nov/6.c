#include <stdio.h>
int main()
{
    int i_84, j_84, n_84;
    char ch;
    printf("\nEnter how many rows=>");
    scanf("%d", &n_84);

    for (i_84 = 1; i_84 < n_84; i_84++)
    {
        ch = 'A';
        for (j_84 = 1; j_84 <= i_84; j_84++)
        {
            printf("%c", ch);
            ch = ch + 1;
        }
        printf("\n");
    }
    return 0;
}