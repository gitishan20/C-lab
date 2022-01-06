#include <stdio.h>
int main()
{
    char ch_84;
    printf("Enter a character: ");
    scanf("%c", &ch_84);
    if ((ch_84 >= 'A' && ch_84 <= 'Z') || (ch_84 >= 'a' && ch_84 <= 'z'))
        printf("This is an alphabet");
    else if (ch_84 >= '0' && ch_84 <= '9')
        printf("This is a digit");

    else
        printf("This is a special character");
    return 0;
}