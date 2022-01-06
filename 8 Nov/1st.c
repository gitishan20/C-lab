#include <stdio.h>
int main()
{
    char grade_84 = 'B';
    switch (grade_84)
    {
    case 'A':
        printf("Excellent! \n");
        break;
    case 'B':
        break;
    case 'C':
        printf("Well Done!\n");
        break;
    case 'D':
        printf("You passed\n");
        break;
    case 'E':
        printf("Better try again!\n");
        break;
    default:
        printf("Invalid grade\n");
    }
    printf("Your grade is%c\n", grade_84);
    return 0;
}