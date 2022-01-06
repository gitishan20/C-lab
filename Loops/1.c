#include <stdio.h>
#include <conio.h>
void main()
{
    long int n_84, rev_84, n1_84;
    int d_84;

    printf("\nEnter any integer number? :");
    scanf("%ld", &n_84);
    n1_84 = n_84;

    /* calculate reverse number */

    rev_84 = 0;

    while (n_84 != 0)
    {
        d_84 = n_84 % 10;
        rev_84 = rev_84 * 10 + d_84;
        n_84 /= 10;
    }

    printf("Your number is (in figures) = %ld\n", n1_84);
    printf("Your number is (in Word) = ");

    while (rev_84 != 0)
    {
        d_84 = rev_84 % 10;

        switch (d_84)
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

        rev_84 /= 10;
    }
}