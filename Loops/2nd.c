#include <stdio.h>
int main()
{
    int n_84, s_84 = 0, r_84;
    printf("\n Enter the number");
    scanf("%d", &n_84);
    for (; n_84 > 0; n_84 /= 10)
    {
        r_84 = n_84 % 10;
        s_84 = s_84 + r_84;
    }
    printf("\nSum of digits %d", s_84);
    return 0;
}