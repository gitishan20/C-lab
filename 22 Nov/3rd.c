#include <stdio.h>

int main()
{

    int i_84, temp_88, num_88, ar_88[100];

    printf("Enter the number of elements : \n");
    scanf("%d", &num_88);

    printf("Enter array elements:\n");
    for (i_84 = 0; i_84 < num_88; i_84++)
    {
        scanf("%d", &ar_88[i_84]);
    }

    for (i_84 = 0; i_84 < num_88; i_84++)
    {
        temp_88 = ar_88[i_84];
        ar_88[i_84] = ar_88[num_88 - 1 - i_84];
        ar_88[num_88 - 1 - i_84] = temp_88;
    }

    printf("Array list after swapping: \n");
    for (i_84 = 0; i_84 < num_88; i_84++)
    {
        printf("%d ", ar_88[i_84]);
    }

    return 0;
}