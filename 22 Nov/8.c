#include <stdio.h>
int main()
{
    int a[50], i_84, n_84, large;
    printf("\n Enter how many number:");
    scanf("%d", &n_84);
    printf("\nEnter values for the array: ");
    for (i_84 = 0; i_84 < n_84; i_84++) /*Stores number entered by user.*/
        scanf("%d", &a[i_84]);
    /* code to find largest element in an array*/
    large = a[0];
    for (i_84; i_84 < n_84; i_84++)
    {
        if (a[i_84] > large)
            large = a[i_84];
    }
    printf("\n The largest element stored in array a is %d", large);
    return 0;
}