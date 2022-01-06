#include <stdio.h>

int main()
{
    int i_84, ar_88[10], br_88[10];

    for (i_84 = 0; i_84 < 10; i_84++)
    {
        printf("Element %d:", i_84 + 1);
        scanf("%d", &ar_88[i_84]);
    }

    for (i_84 = 0; i_84 < 10; i_84++)
    {
        br_88[i_84] = ar_88[i_84];
    }
    printf("Elements of new array are: ");
    for (i_84 = 0; i_84 < 10; i_84++)
    {
        printf("%d ", br_88[i_84]);
    }

    return 0;
}