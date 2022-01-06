#include <stdio.h>
int factorialFunction(int n);
int main()
{
    int no, factorial;
    printf("Enter a number to calculate it's factorial\n");
    scanf("%d", &no);
    factorial = factorialFunction(no);
    printf("Factorial of the num(%d) = %d\n", no, factorial);
    return 0;
}
int factorialFunction(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}