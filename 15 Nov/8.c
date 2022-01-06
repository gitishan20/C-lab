#include <stdio.h>
int main()
{
    int i_84 = 1, c_84 = 'A';
    for (i_84 = 1; i_84 <= 5; i_84++)
    {
        c_84 = 'Z';
        for (int j_84 = 1; j_84 <= i_84; j_84++)
        {
            printf("%c  ", c_84);
            c_84--;
        }
        printf("\n");
    }
}