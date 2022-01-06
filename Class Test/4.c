#include <stdio.h>

int main()
{
    int arr_884[10];
    printf("enter the numbers in the array :\n");
    /* loop to take input for 10 elements of the array*/
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr_884[i]);
    }
    int arr_even_884[10];
    int size_884 = 0;
    printf("the odd numbers after multiplying with 2 are :\n");
    /* loop to print the odd numbers multiplied with 2 */
    for (int i = 0; i < 10; i++)
    {
        // if else statement to check wether a number is even or odd
        // if odd then multiplied with 2 and displayed
        // else it is assigned to the even number array
        if (arr_884[i] % 2 == 1)
        {
            arr_884[i] *= 2;
            printf("%d ->", arr_884[i]);
        }
        else
        {
            arr_even_884[size_884] = arr_884[i];
            size_884++;
        }
    }

    printf("\nthe even numbers printed in reverse are :\n");

    // loop to print the even number array in reerse order
    for (int k = size_884 - 1; k >= 0; k--)
        printf("%d ->", arr_even_884[k]);
}