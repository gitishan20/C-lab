#include <stdio.h>
int main()
{
    int i_84, j_84, k_84 = 1, m_84, n_84 = 3, c = 1;
    for (i_84 = 1; i_84 <= 4; i_84++)
    {
        for (j_84 = 1; j_84 <= n_84; j_84++)
        {
            printf(" ");
        }
        while (c <= i_84)
        {
            printf("%d ", k_84);
            k_84++;
            c++;
        }

        printf("\n");
        n_84--;
        c = 1;
    }
}