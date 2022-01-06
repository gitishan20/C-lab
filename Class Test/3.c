#include <stdio.h>
int main()
{
    int n884, a[20], od884, ev884;

    printf("Enter the size of the array: ");
    scanf("%d", &n884);
    /* Input 10 elements in an array*/
    printf("Enter array elements: \n");
    for (int i = 0; i < n884; i++)
    {
        printf("ELEMENT-%d: ", i + 1);
        scanf("%d", &a[i]);
    }
    /* Print odd elements multiplied by 2*/
    printf("\nOdd numbers in the array are: \n");
    for (int i = 0; i < n884; i++)
    {
        if (a[i] % 2 != 0)
        {
            od884 = a[i] * 2;
            printf("%d ", od884);
        }
    }
    /* Print even elements */
    printf("\nEven elemets in reverse order are : ");
    for (int i = 9; i >= 0; --i)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}