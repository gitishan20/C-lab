#include <stdio.h>

int max3(int n1, int n2, int n3);
int main()
{
    int a_84, b_84, c_84;
    printf("enter three no:");
    scanf("%d %d %d", &a_84, &b_84, &c_84);
    int ret;

    ret = max3(a_84, b_84, c_84);
    printf("the max value is :%d", ret);
    return 0;
}

int max3(int n1, int n2, int n3)
{
    int result;

    if (n1 > n2)
    {
        if (n1 > n3)
            result = n1;
        else
            result = n3;
    }
    else
    {
        if (n2 > n3)
            result = n2;
        else
            result = n3;
    }
}