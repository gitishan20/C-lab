#include <stdio.h>
int sum(int a_84, int b_84);
int main()
{
    int num1_84, num2_84;
    printf("Enter the first no:\n");
    scanf("%d", &num1_84);
    printf("Enter the second no:\n");
    scanf("%d", &num2_84);
    printf("The sum of num1 and num2 is: %d", sum(num1_84, num2_84));
    return 0;
}
int sum(int a_84, int b_84)
{
    int result_84;
    result_84 = a_84 + b_84;
    return result_84;
}
