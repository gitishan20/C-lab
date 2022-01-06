#include <stdio.h>

int main()
{
    int a[20], i_84, m_84, n_84, r_84;
    printf("\n Enter the decimal integers");
    scanf("%d", &n_84);
    m_84 = n_84;
    for (i_84 = 0; n_84 > 0; i_84++)
    {
        r_84 = n_84 % 2;
        a[i_84] = r_84;
        n_84 = n_84 / 2;
    }
    printf("\n binary equivalent of %d is\t", m_84);
    for (i_84--; i_84 >= 0; i_84--)
        printf("%d", a[i_84]);

    return 0;
}