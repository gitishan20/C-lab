#include <stdio.h>
int main()
{
    int a_84, b_84, c_84;
    char op_84;

    printf("Choose an option for operationyou want to perform\n('+','-','%','*')\n");
    scanf("%c", &op_84);

    printf("Enter two number:\n");
    scanf("%d %d", &a_84, &b_84);

    switch (op_84)
    {
    case '+':
        c_84 = a_84 + b_84;
        printf("The result is %d", c_84);
        break;
    case '-':
        c_84 = a_84 - b_84;
        printf("The result is %d", c_84);
        break;
    case '%':
        c_84 = a_84 % b_84;
        printf("The result is %d", c_84);
        break;
    case '*':
        c_84 = a_84 * b_84;
        printf("The result is %d", c_84);
        break;
    }
    return 0;
}