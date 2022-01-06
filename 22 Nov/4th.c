#include <stdio.h>
int main(void)
{
    int number[10];
    int count_84 = 10;
    int sum = 0;
    float average = 0.0f;
    printf("\nEnter the 10 number:\n");

    int i;
    for (i = 0; i < count_84; i++)
    {
        printf("%d> ", i + 1);
        scanf("%d", &number[i]);
        sum += number[i];
    }
    printf("\nsum of the ten numbers entered is:%d\n", sum);
    average = (float)sum / count_84;
    printf("\n average of the ten numbers entered is: %f\n", average);
    return 0;
}