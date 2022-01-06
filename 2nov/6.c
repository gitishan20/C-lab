#include <stdio.h>
int getSum(int n);
int main()
{
    int num, callFunction;
    printf("enter number");
    scanf("%d", &num);
    callFunction = getSum(num);
    printf("%d", callFunction);
    return 0;
}
int getSum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n /= 10;
    }
    return sum;
}