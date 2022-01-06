#include <stdio.h>
int main()
{
    int totalmarks_84, tm_84;
    printf("Enter the total marks scored:\n");
    scanf("%d", &totalmarks_84);
    tm_84 = totalmarks_84 / 10;

    switch (tm_84)
    {
    case 10:
    case 9:
        printf("Secured grade is 0\n");
        break;
    case 8:
        printf("Secured grade is E\n");
        break;
    case 7:
        printf("Secured grade is A\n");
        break;
    case 6:
        printf("Secured grade is B\n");
        break;
    case 5:
        printf("Secured grade is C\n");
        break;
    case 4:
        printf("Secured grade is D\n");
        break;
    case 3:
        printf("Secured grade is F\n");
        break;
    case 2:
        printf("Secured grade is F\n");
        break;

    case 1:
        printf("Secured grade is F\n");
        break;
    case 0:
        printf("Secured grade is F\n");
        break;
    }
    return 0;
}