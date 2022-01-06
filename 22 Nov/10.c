#include <stdio.h>

int main()
{
    int i84, ar84[10], j84, k84, swap;
    for (i84 = 0; i84 < 10; i84++)
    {
        printf("enter element %d \n", i84 + 1);
        scanf("%d", &ar84[i84]);
    }
    for (j84 = 0; j84 < 9; j84++)
    {
        for (k84 = 0; k84 < 10 - j84 - 1; k84++)
        {
            if (ar84[k84] > ar84[k84 + 1])
            {
                swap = ar84[k84];
                ar84[k84] = ar84[k84 + 1];
                ar84[k84 + 1] = swap;
            }
        }
    }
    printf("\n second largest number is %d", ar84[8]);
    return 0;
}