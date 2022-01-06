#include <stdio.h>

int main()
{
    int a_84, b_84, m_84, n_84, gcd;
    printf("\nEnter two numbers=");
    scanf("%d%d", &a_84, &b_84);
    m_84 = a_84;
    n_84 = b_84;
    while (a_84 != b_84)
    {
        if (a_84 > b_84)
            a_84 = a_84 - b_84;
        else
            b_84 = b_84 - a_84;
    }
    gcd = b_84;
    printf("\nThe gcd of %d and %d is %d\n", m_84, n_84, gcd);
}