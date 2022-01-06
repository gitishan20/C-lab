#include <stdio.h>
int main()
{
    int a_84, b_84, c_84, d_84;
    printf("Enter the three number");
    scanf("%d%d%d", &a_84, &b_84, &c_84);
    d_84 = a_84 + b_84 + c_84;
    printf("The sum of three number %d %d and %d is %d ", a_84, b_84, c_84, d_84);
    return 0;
}