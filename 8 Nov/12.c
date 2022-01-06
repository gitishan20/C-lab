#include <stdio.h>
int main()
{
    char ch_84;

    printf("\n B= BURGER RS 200");
    printf("\n F = FRENCH FRIES RS 50");
    printf("\n P = PIZZA RS 500");
    printf("\n S = SANDWHICHES RS 150");
    printf("\n enter choice ");
    scanf("%c", &ch_84);
    int n, res;
    switch (ch_84)
    {
    case 'B':
        printf("Enter the quantity: ");
        scanf("%d", &n);
        res = n * 200;
        printf("\n Total cost Rs %d", res);
        break;

    case 'F':
        printf("Enter the quantity: ");
        scanf("%d", &n);
        res = n * 50;
        printf("\n Total cost Rs %d", res);
        break;

    case 'P':
        printf("Enter the quantity: ");
        scanf("%d", &n);
        res = n * 500;
        printf("\n Total cost Rs %d", res);
        break;

    case 'S':
        printf("Enter the quantity: ");
        scanf("%d", &n);
        res = n * 150;
        printf("\n Total cost Rs %d", res);
        break;
    }
    return 0;
}