#include <stdio.h>
int main()
{
    int a_84, b_84, c_84;
    printf("Enter the two number");
    scanf("%d%d", &a_84, &b_84);
    c_84 = a_84 - b_84;
    printf("The Difference of two number %d and %d is %d ", a_84, b_84, c_84);
    return 0;
}