#include <stdio.h>
/* Area of a circle*/
int main()

{
    float radius_84, area_84;
    printf("\nEnter the radius of a circle: ");
    scanf("%f", &radius_84);
    area_84 = 3.14 * radius_84 * radius_84;
    printf("\nArea of circle: %f", area_84);
    return 0;
}