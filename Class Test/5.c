#include <stdio.h>

int main()
{
    int arr_88[10];
    int i_88;

    // Input 10 elements in an array
    for (i_88 = 0; i_88 < 10; i_88++)
    {
        printf("ELEMENT-%d: ", i_88 + 1);
        scanf("%d", &arr_88[i_88]);
    }

    // Print odd elements multiplied by 2
    printf("\nThe double of odd numbers are: \n");
    for (i_88 = 0; i_88 < 10; i_88++)
    {
        if (arr_88[i_88] % 2 != 0)
        {
            printf("%d ", 2 * arr_88[i_88]);
        }
    }

    // Print even elements
    printf("\nThe Even numbers in reverse order are: \n");
    for (i_88 = 9; i_88 >= 0; i_88--)
    {
        if (arr_88[i_88] % 2 == 0)
        {
            printf("%d ", arr_88[i_88]);
        }
    }

    return 0;
}