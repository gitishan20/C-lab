#include <stdio.h>

int p_84 = 20;
int max(int num1_84, int num2_84);
int main()
{
    int a_84 = 100;
    int b_84 = 200;
    int ret_84;
    printf("\nIn main, a and b and p are %d and %d and %d\n", a_84, b_84, p_84);
    ret_84 = max(a_84, b_84);
    printf("\nIn main again, anf b are %d and %d\n", a_84, b_84);
    printf("\nThe max value is %d\n", ret_84);
    return 0;
}

int max(int a_84, int b_84)
{
    int result_84;
    if (a_84 > b_84)
    {
        result_84 = a_84;
    }
    else
    {
        result_84 = b_84;
        a_84 = a_84 + 10;
        b_84 = b_84 + 10;
    }
    printf("\nIn function, and b are %d and %d\n", a_84, b_84);
    return result_84;
}