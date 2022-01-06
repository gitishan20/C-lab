#include <stdio.h>
int ExitControlledLoop(int a, int b)
{
    do
    {
        printf("the value of n is %d \n", a);
        printf("the value of m is %d \n", b);
        a++;
        b++;
    } while (b <= 10);
}
#include <stdio.h>

int main()
{
    int ret1, ret2, choice;
    printf("choose \n");
    scanf("%d", &choice);
    if (choice == 1)
    {
        ret1 = EntryControlledLoop(1, 1);
    }
    else if (choice == 2)
    {
        ret2 = ExitControlledLoop(1, 1);
    }
    return 0;
}