#include <stdio.h>
int main()
{
    int n_84, i_84;
    long int fact = 1;
    printf("\nEnter a number to find out its factorial=>");
    scanf("%d", &n_84);
    for (i_84 = n_84; i_84 > 0; i_84--)
        fact = fact * i_84;
    printf("\n%d!=%ld\n", n_84, fact);
    return 0;
}