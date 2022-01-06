#include <stdio.h>
int main()
{
    int i_84, ar90[10], temp;
    for (i_84 = 0; i_84 < 10; i_84++)
    {
        printf("enter element %d \n", i_84 + 1);
        scanf("%d", &ar90[i_84]);
    }
    for (i_84 = 0; i_84 < 10; i_84 += 2)
    {
        temp = ar90[i_84];
        ar90[i_84] = ar90[i_84 + 1];
        ar90[i_84 + 1] = temp;
    }
    for (i_84 = 0; i_84 < 10; i_84++)
    {
        printf("\n %d", ar90[i_84]);
    }

    return 0;
}