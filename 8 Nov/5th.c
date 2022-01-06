#include <stdio.h>
#include <math.h>
int main()
{
    float a_84, b_84, c_84, real_84, img_84, dis_84, i1_84, i2_84, r1_84, r2_84;

    printf("Enter the values of a,b and c\n");
    scanf("%f%f%f", &a_84, &b_84, &c_84);

    dis_84 = (b_84 * b_84) - (4 * a_84 * c_84);

    if (dis_84 == 0)
    {
        printf("Roots are equal\n");
        r1_84 = r2_84 = b_84 / 2 * a_84;
        printf("Roots are %.2f and %.2f", r1_84, r2_84);
    }
    else if (dis_84 > 0)
    {
        printf("Roots are equal and unequal\n");
        r1_84 = (-b_84 + sqrt(dis_84)) / (2 * a_84);
        r2_84 = (-b_84 - sqrt(dis_84)) / (2 * a_84);
        printf("r1=%.21f and r2=%.21f", r1_84, r2_84);
    }
    else
    {
        }
}