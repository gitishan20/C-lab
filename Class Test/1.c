#include <stdio.h>

int main()
{
    int n_84, num_84 = 0;

    /* Input number from user */
    printf("Enter any number to print in words: ");
    scanf("%d", &n_84);

    /* Store reverse of n in num */
    while (n_84 != 0)
    {
        num_84 = (num_84 * 10) + (n_84 % 10);
        n_84 /= 10;
    }

        while (num_84 != 0)
    {
        switch (num_84 % 10)
        {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        }

        num_84 = num_84 / 10;
    }

    return 0;
}