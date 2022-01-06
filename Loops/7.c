#include <stdio.h>
int main()
{
    int n, fact = 1, n1, rem, sum = 0;
    printf("Enter the number to check:");
    scanf("%d", &n);
    n1 = n;
    while (n > 0)
    {
        rem = n % 10;
        while (rem > 0)
        {
            fact = fact * rem;
            rem--;
        }
        n /= 10;
        sum = sum + fact;
        fact = 1;
    }
    if (n1 == sum)
    {
        printf("entered number is strong number");
    }
    else
    {
        printf("It is not a strong number");
    }
}