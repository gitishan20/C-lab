#include <stdio.h>
int main()
{
    int num1_84, num2_84, i_84, GCD_84;

    printf("Enter the two number:\n");
    scanf("%d %d", &num1_84, &num2_84);

    for (i_84 = 1; i_84 <= num1_84 && i_84 <= num2_84; i_84++)
    {
        if (num1_84 % i_84 == 0 && num2_84 % i_84 == 0)
            GCD_84 = i_84;
    }

    printf("GCD of %d and %d is %d", num1_84, num2_84, GCD_84);

    return 0;
}