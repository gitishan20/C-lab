#include <stdio.h>
int main()
{
    int i84, ar84[10], j84, k84, swap;
    for (i84 = 0; i84 < 10; i84++)
    {
        printf("enter element %d\n", i84 + 1);
        scanf("%d", &ar84[i84]);
    }
    for (i84 = 0; i84 < 10; i84 += 2)
    {
        temp ar84[i84];
        ar84[i84] = ar84[i84 + 1];
        ar84[i84 + 1] = temp;
    }
    for (i84 = 0; i84 < 10; i84++)
    {
        printf("\n%d", ar84[i84]);
    }
    return 0;
}