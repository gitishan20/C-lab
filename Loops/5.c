#include <stdio.h>
int main()
{
    int n, sum = 0, i, n1, rem;
    printf("enter the number:");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        printf("The entered number is perfect number");
    }
    else
    {
        printf("The entered number is not a perfect number");
    }
}